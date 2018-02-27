#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,q;
  bool switches[1000][36],bulbes[1000][1000],cand[36][1000];
  while(cin>>n>>m>>q,n){
    for(int i=0;i<q;i++){
      string s;
      cin>>s;
      for(int j=0;j<n;j++){
	switches[i][j]=s[j]-'0';
	if(i!=0) switches[i][j]^=switches[i-1][j];
      }
      string b;
      cin>>b;
      for(int j=0;j<m;j++)
	bulbes[i][j]=b[j]-'0';
    }
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
	cand[i][j]=1;
    for(int i=0;i<q;i++)
      for(int j=0;j<n;j++)
	for(int k=0;k<m;k++)
	  cand[j][k]&=switches[i][j]==bulbes[i][k];
    for(int i=0;i<m;i++){
      int index=-1,cnt=0;
      for(int j=0;j<n;j++)
	if(cand[j][i]){
	  index=j; cnt++;
	}
      if(cnt>1) cout<<"?";
      else if(index<10) cout<<index;
      else cout<<(char)(index-10+'A');
    }
    cout<<endl;
  }
}
