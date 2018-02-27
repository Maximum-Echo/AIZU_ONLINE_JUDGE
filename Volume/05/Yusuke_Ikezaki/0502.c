#include <stdio.h>

int main(void)
{
  int N[10000],E[10000],W[10000],S[10000],U[10000],D[10000];
  int n,i,sum;

  for(;;){
    scanf("%d", &n);
    if(n==0) break;

    N[0]=5,E[0]=3,W[0]=4,S[0]=2,U[0]=1,D[0]=6,sum=1;  
    for(i=1;i<n+1;i++){
      char ope[10];
      scanf("%s", ope);
      if(strcmp(ope,"North")==0){
	U[i]=S[i-1],N[i]=U[i-1],S[i]=D[i-1],D[i]=N[i-1],E[i]=E[i-1],W[i]=W[i-1];
      } else if(strcmp(ope,"East")==0){
	U[i]=W[i-1],E[i]=U[i-1],W[i]=D[i-1],D[i]=E[i-1],N[i]=N[i-1],S[i]=S[i-1];
      } else if(strcmp(ope,"West")==0){
	U[i]=E[i-1],E[i]=D[i-1],W[i]=U[i-1],D[i]=W[i-1],N[i]=N[i-1],S[i]=S[i-1];
      } else if(strcmp(ope,"South")==0){
	U[i]=N[i-1],N[i]=D[i-1],S[i]=U[i-1],D[i]=S[i-1],E[i]=E[i-1],W[i]=W[i-1];
      } else if(strcmp(ope,"Right")==0){
	N[i]=W[i-1],E[i]=N[i-1],W[i]=S[i-1],S[i]=E[i-1],U[i]=U[i-1],D[i]=D[i-1];
      } else if(strcmp(ope,"Left")==0){
	N[i]=E[i-1],E[i]=S[i-1],W[i]=N[i-1],S[i]=W[i-1],U[i]=U[i-1],D[i]=D[i-1];
      } 
      sum=sum+U[i];
    }
    printf("%d\n", sum);
  }

  return 0;
}

  
