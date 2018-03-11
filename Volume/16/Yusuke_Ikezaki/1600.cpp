#include <bits/stdc++.h>
using namespace std;

int main(){
  int m,nmin,nmax;
  while(cin>>m>>nmin>>nmax,m){
    int score[m];
    int Maxnum=0;
    for(int i=0;i<m;i++)
      cin>>score[i];
    for(int i=nmin,Max=0;i<=nmax;i++)
      if(score[i-1]-score[i]>=Max){
	Max=score[i-1]-score[i]; Maxnum=i;
      }
    cout<<Maxnum<<endl;
  }
}
