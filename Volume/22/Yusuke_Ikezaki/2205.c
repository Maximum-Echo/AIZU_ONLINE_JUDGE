#include <stdio.h>

int main(void){
  int n,m,M,i,sum;
  char N[9];

  for(;;){
    scanf("%d %d", &n, &m);
    if(n==0) break;

    for(i=0;i<n;i++){
      scanf("%s", 
