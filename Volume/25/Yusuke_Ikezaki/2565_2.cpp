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
    string sig[n+2];
    sig[0]="1000000005";
    for(int i=1;i<=n;i++)
      cin>>sig[i];
    if(n%2==0) sig[n+1]="-1000000005";
    else sig[n+1]="1000000005";
    int Min=-1000000005,Max=1000000005;
    bool checker=true;
    for(int i=1;i<=n;i++){
      if(sig[i]=="x"){
	if(sig[i+1]=="x"){
	  cout<<"none"<<endl; checker=false; break;
	}
	int left=stoi(sig[i-1]),right=stoi(sig[i+1]);
	if(i%2==0){
	  if(max(left,right)>Min) Min=max(left,right);
	} else{
	  if(min(left,right)<Max) Max=min(left,right);
	}   
      } else{
	if(sig[i-1]=="x") continue;
	int num=stoi(sig[i]);
	if(i%2==1){
	  if(num>stoi(sig[i-1])){
	    cout<<"none"<<endl; checker=false; break;
	  }
	} else{
	  if(num<stoi(sig[i-1])){
	    cout<<"none"<<endl; checker=false; break;
	  }
	}
      }
    }
    if(checker){
      if(Max-Min==2) cout<<Max-1<<endl;
      else if(Max-Min>2) cout<<"ambiguous"<<endl;
      else cout<<"none"<<endl;
    }
  }
}
