#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin>>n,n){
    int Max=0;
    string airport[50];
    string code[50];
    for(int i=0;i<n;i++){
      cin>>airport[i];
      code[i]=airport[i][0];
      bool vowel=false;
      for(int j=0;j<airport[i].size();j++){
	if(vowel) code[i].push_back(airport[i][j]);
	if(airport[i][j]=='a'||airport[i][j]=='i'||airport[i][j]=='u'||
		airport[i][j]=='e'||airport[i][j]=='o') vowel=true;
	else vowel=false;
      }
      if(code[i].size()>Max) Max=code[i].size();
    }
    bool can=false;
    for(int i=1;i<=Max;i++){
      set<string> s;
      for(int j=0;j<n;j++){
	if(code[j].size()<i) code[j].push_back('$');
	s.insert(code[j].substr(0,i));
      }
      //cout<<s.size()<<endl;
      if(s.size()==n){
	cout<<i<<endl; can=true; break;
      }
    }
    if(!can) cout<<"-1"<<endl;
  }
}
