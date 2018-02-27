#include <stdio.h>

int main(void)
{
  int n,r,p,c,i,j;
  int cut[50],pile[50];

  for(;;){
    scanf("%d %d", &n, &r);
    if(n==0&&r==0) break;

    for(i=0;i<n;i++){
      pile[i]=i+1;
    }
    for(i=0;i<r;i++){
      scanf("%d %d", &p, &c);
      if(p==1) continue;
      for(j=0;j<c;j++){
	cut[j]=pile[n-p-c+j+1];
      }
      for(j=1;j<p;j++){
	pile[n-p-c+j]=pile[n-p+j];
      }
      for(j=0;j<c;j++){
	pile[n-c+j]=cut[j];
      }
    }
    printf("%d\n", pile[n-1]);
  }

  return 0;
}
