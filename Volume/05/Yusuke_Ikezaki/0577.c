#include <stdio.h>

int main(void)
{
  int N,num[600],i,j,k;

  scanf("%d", &N);
  for(i=0;i<3*N;){
    scanf("%d %d %d", &num[i], &num[i+1], &num[i+2]);
    i=i+3;
  }
  for(i=0;i<3;){
    for(j=0;j<N;j++){
      if(num[3*j+i]==num[3*(j-1)+i]) po=0;
