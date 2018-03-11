#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(void)
{
  int i,N[101],E[101],W[101],S[101],U[101],D[101];
  char com[101];

  scanf("%d %d %d %d %d %d", &U[0], &S[0], &E[0], &W[0], &N[0], &D[0]);
  scanf("%s", com);
    
  for(i=1;i<strlen(com)+1;i++){
    if(com[i-1]=='N'){
      U[i]=S[i-1],N[i]=U[i-1],S[i]=D[i-1],D[i]=N[i-1],E[i]=E[i-1],W[i]=W[i-1];
    } else if(com[i-1]=='E'){
      U[i]=W[i-1],E[i]=U[i-1],W[i]=D[i-1],D[i]=E[i-1],N[i]=N[i-1],S[i]=S[i-1];
    } else if(com[i-1]=='W'){
      U[i]=E[i-1],E[i]=D[i-1],W[i]=U[i-1],D[i]=W[i-1],N[i]=N[i-1],S[i]=S[i-1];
    } else if(com[i-1]=='S'){
      U[i]=N[i-1],N[i]=D[i-1],S[i]=U[i-1],D[i]=S[i-1],E[i]=E[i-1],W[i]=W[i-1];
    }
  }
  cout<<U[strlen(com)]<<endl;
}
