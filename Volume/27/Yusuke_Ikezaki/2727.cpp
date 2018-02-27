#include <iostream>
using namespace std;

int main(){
  string s,t;
  cin>>s>>t;

  int n=0,m=0,p=0;
  for(;;){
    for(;n<s.size();n++)
      if(s[p]==s[n]){
	p++; n++; break;
      }
    if(n==s.size()){
      if(p==n){
	cout<<"Yes"<<endl; return 0;
      } else break;
    }
    for(;m<t.size();m++)
      if(s[p]==t[m]){
	p++; m++; break;
      }
    if(m==t.size()){
      if(p==m){
	cout<<"Yes"<<endl; return 0;
      } else break;
    }
  }
  n=0; m=0; p=0;
  for(;;){
    for(;m<t.size();m++)
      if(s[p]==t[m]){
	p++; m++; break;
      }
    if(m==t.size()){
      if(p==m){
	cout<<"Yes"<<endl; return 0;
      } else break;
    }
    for(;n<s.size();n++)
      if(s[p]==s[n]){
	p++; n++; break;
      }
    if(n==s.size()){
      if(p==n){
	cout<<"Yes"<<endl; return 0;
      } else break;
    }
  }
  cout<<"No"<<endl;
}
