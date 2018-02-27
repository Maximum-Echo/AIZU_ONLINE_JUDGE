//This program must be compiled with -std=c++11
#include <iostream>
#include <vector>
using namespace std;

struct node{
  string exp;
  int left=-1;
  int right=-1;
};

int num;
bool v[11],result;
vector<char> s;

int find(char c){
  int i;
  for(i=0;i<s.size();i++)
    if(s[i]==c) break;
  if(i<s.size()) return i; 
  else return -1;
}

int prior(char c){
  if(c=='=') return 0;
  else if(c=='>') return 1;
  else if(c=='+') return 2;
  else if(c=='*') return 3;
  else if(c=='-') return 4;
  else if(c=='T'||c=='F') return 5;
  else{
    if(find(c)==-1) s.push_back(c);
    return 5;
  }
}

void divide(int self,string exp,node nodes[]){
  int cnt=0,min=5,min_index=-1;
  bool inter=false;
  for(int i=0;i<exp.size();i++){
    if(exp[i]=='('){
      cnt++;
      if(i==0) inter=true;
    } else if(exp[i]==')'){
      cnt--;
      if(cnt==0&&i!=exp.size()-1) inter=false;
    } else if(cnt==0){
      if(exp[i]=='-')
	if(exp[i+1]=='>') i++;
      int p=prior(exp[i]);
      if(p<min){
	min=p; min_index=i;
      }
    }
  }
  if(inter){
    divide(self,exp.substr(1,exp.size()-2),nodes); return;
  }
  if(min_index>=0){
    if(min==1)
      divide(nodes[self].left=++num,exp.substr(0,min_index-1),nodes);
    else if(min<4)
      divide(nodes[self].left=++num,exp.substr(0,min_index),nodes);
    divide(nodes[self].right=++num,exp.substr(min_index+1),nodes);
    nodes[self].exp=exp[min_index];
  } else nodes[self].exp=exp;
}

bool solve(int n,node nodes[]){
  if(nodes[n].exp=="F") return false;
  else if(nodes[n].exp=="T") return true;
  else{
    if(nodes[n].exp=="+")
      return solve(nodes[n].left,nodes)||solve(nodes[n].right,nodes);
    else if(nodes[n].exp=="*")
      return solve(nodes[n].left,nodes)&&solve(nodes[n].right,nodes);
    else if(nodes[n].exp==">")
      return !solve(nodes[n].left,nodes)||solve(nodes[n].right,nodes);
    else if(nodes[n].exp=="=")
      return solve(nodes[n].left,nodes)==solve(nodes[n].right,nodes);
    else if(nodes[n].exp=="-")
      return !solve(nodes[n].right,nodes);
    else return v[find(nodes[n].exp[0])];
  }
}

void all(node nodes[],int depth){
  if(!result) return;
  if(depth==s.size()){
    if(!solve(0,nodes)) result=false;
    return;
  }
  v[depth]=false; all(nodes,depth+1);
  v[depth]=true; all(nodes,depth+1);
}

int main(){
  string exp;

  for(;;){
    cin>>exp;
    if(exp=="#") break;
    num=0; s.clear(); result=true;
    struct node nodes[1000];
    divide(0,exp,nodes);
    all(nodes,0);
    if(result) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}
