#include <stdio.h>

int main(void){
  int n,scr[100][5],i,j;

  for(;;){
    scanf("%d", &n);
    if(n==0) break;

    int max=0;
    int min=500;
    int sum[100]={0};
    for(i=0;i<n;i++){
      for(j=0;j<5;j++){
      scanf("%d", &scr[i][j]);
      sum[i]+=scr[i][j];
      }
      if(sum[i]>max) max=sum[i];
      if(sum[i]<min) min=sum[i];
    }
    printf("%d %d\n", max, min);
  }

  return 0;
}
      
