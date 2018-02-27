<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int stoi(string s){
  int num=0;
  for(int i=s.size()-1,digit=1;i>=0;i--,digit*=10){
    if(s[i]=='-') num*=-1; 
    else num+=(s[i]-'0')*digit;
  }
  return num;
}

int main(){
  int n;
  while(cin>>n,n){
    string sig[1001];
    sig[0]="1000000001";
    for(int i=1;i<=n;i++)
      cin>>sig[i];
    if(n%2==0) sig[n+1]="-1000000001";
    else sig[n+1]="1000000001";
    int Min=-100000001,Max=1000000001;
    for(int i=1;i<=n;i++){
      if(Min>Max){
	cout<<"none"<<endl; break;
      }
      if(sig[i]=="x"){
	if(sig[i+1]=="x"){
	  cout<<"none"<<endl; break;
	}
	if(i%2==1){
	  if(sig[i-1]);
      } else{
      }
    }
  }
}
=======
#include <bits/stdc++.h>
using namespace std;

int stoi(string s){
  int num=0;
  for(int i=s.size()-1,digit=1;i>=0;i--,digit*=10){
    if(s[i]=='-') num*=-1; 
    else num+=(s[i]-'0')*digit;
  }
  return num;
}

int main(){
  int n;
  while(cin>>n,n){
    string sig[1001];
    sig[0]="1000000001";
    for(int i=1;i<=n;i++)
      cin>>sig[i];
    if(n%2==0) sig[n+1]="-1000000001";
    else sig[n+1]="1000000001";
    int Min=-100000001,Max=1000000001;
    for(int i=1;i<=n;i++){
      if(Min>Max){
	cout<<"none"<<endl; break;
      }
      if(sig[i]=="x"){
	if(sig[i+1]=="x"){
	  cout<<"none"<<endl; break;
	}
	if(i%2==1){
	  if(sig[i-1]);
      } else{
      }
    }
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
