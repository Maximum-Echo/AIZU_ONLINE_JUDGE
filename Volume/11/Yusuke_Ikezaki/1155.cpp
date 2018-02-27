#include <iostream>
using namespace std;

struct node{
  string exp;
  int left=-1;
  int right=-1;
};

int num;

int prior(char c){
  if(c=='+') return 0;
  else if(c=='*') return 1;
  else if(c=='-') return 2;
  else return 3;
}

void divide(int self,string exp,node nodes[]){
  int cnt=0,min=3,min_index=-1;
  bool inter=false;
  for(int i=0;i<exp.size();i++){
    if(exp[i]=='('){
      cnt++;
      if(i==0) inter=true;
    } else if(exp[i]==')'){
      cnt--;
      if(cnt==0&&i!=exp.size()-1) inter=false;
    } else if(cnt==0){
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
    if(min<2) divide(nodes[self].left=++num,exp.substr(0,min_index),nodes);
    divide(nodes[self].right=++num,exp.substr(min_index+1),nodes);
    nodes[self].exp=exp[min_index];
  } else nodes[self].exp=exp;
}

int AND[3][3]={{0,0,0},{0,1,1},{0,1,2}};
int OR[3][3]={{0,1,2},{1,1,2},{2,2,2}};
int NOT[3]={2,1,0};

int solve(int n,node nodes[],int p,int q,int r){
  if(nodes[n].exp=="0") return 0;
  else if(nodes[n].exp=="1") return 1;
  else if(nodes[n].exp=="2") return 2;
  else if(nodes[n].exp=="P") return p;
  else if(nodes[n].exp=="Q") return q;
  else if(nodes[n].exp=="R") return r;
  else{
    if(nodes[n].exp=="+")
      return OR[solve(nodes[n].left,nodes,p,q,r)][solve(nodes[n].right,nodes,p,q,r)];
    else if(nodes[n].exp=="*")
      return AND[solve(nodes[n].left,nodes,p,q,r)][solve(nodes[n].right,nodes,p,q,r)];
    else
      return NOT[solve(nodes[n].right,nodes,p,q,r)];
  }
  //cout<<nodes[n].exp<<endl;
}

int main(){
  string exp;

  for(;;){
    cin>>exp;
    if(exp==".") break;
    num=0;
    struct node nodes[100];
    divide(0,exp,nodes);
    int sum=0;
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
	for(int k=0;k<3;k++)
	  if(solve(0,nodes,i,j,k)==2) sum++;
    cout<<sum<<endl;
  }
}
