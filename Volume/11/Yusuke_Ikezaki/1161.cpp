#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,ans,num,v[26],a[10];
string s[12];
vector<int> p;

void init(){
  for(int i=0;i<10;i++)
    p.push_back(i);
}

void find(char c){
  bool exist=false;
  for(int i=0;i<num;i++)
    if(a[i]==c) exist=true;
  if(!exist) a[num++]=c;
}

bool calc(){
  int above=0,below=0;
  for(int i=0;i<n-1;i++)
    for(int j=0,digit=1;j<s[i].size();j++,digit*=10)
      above+=v[s[i][j]-65]*digit;
  for(int i=0,digit=1;i<s[n-1].size();i++,digit*=10)
    below+=v[s[n-1][i]-65]*digit;
  if(above==below) return true;
  else return false;
}

void all(){
  do{
    for(int i=0;i<num;i++)
      v[a[i]-65]=p[i];
    cout<<endl;
    if(calc()) ans++;
  } while(next_permutation(p.begin(),p.end()));
}

int main(){
  for(;;){
    cin>>n;
    if(n==0) break;
    num=ans=0;
    init();
    for(int i=0;i<n;i++){
      cin>>s[i];
      for(int j=0;j<s[i].size();j++)
	find(s[i][j]);
    }
    all();
    cout<<ans<<endl;
    p.clear();
  }
}
