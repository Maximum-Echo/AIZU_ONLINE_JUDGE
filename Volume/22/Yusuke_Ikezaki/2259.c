<<<<<<< HEAD
#include <stdio.h>

int main(void){
  int par,sol[20][20],pro,i,j,max,sum[20]={0};

  scanf("%d %d", &par, &pro);
  for(i=0;i<par;i++){
    for(j=0;j<pro;j++){
      scanf("%d", &sol[i][j]);
      if(sol[i][j]==1) sum[i]++;
    }
  }
  for(i=0;i<par;i++){
    if(sum[i]>max) max=sum[i];
  }
  printf("%d\n", max);

  return 0;
}
=======
#include <stdio.h>

int main(void){
  int par,sol[20][20],pro,i,j,max,sum[20]={0};

  scanf("%d %d", &par, &pro);
  for(i=0;i<par;i++){
    for(j=0;j<pro;j++){
      scanf("%d", &sol[i][j]);
      if(sol[i][j]==1) sum[i]++;
    }
  }
  for(i=0;i<par;i++){
    if(sum[i]>max) max=sum[i];
  }
  printf("%d\n", max);

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
