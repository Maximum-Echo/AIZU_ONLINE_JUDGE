#include <stdio.h>

int main(void){
  int i,m,n,p,r,ans,sum=0;
  int x[1001];
  
  for(;;){
    scanf("%d %d %d", &n, &m, &p);
    if(n==0&&m==0&&p==0) break;

    for(i=0;i<n;i++){
      scanf("%d", &x[i]);
      sum=sum+x[i];
    }

    r=sum*(100-p);

    if(x[m-1]!=0){
      ans=r/x[m-1];
    } else if(x[m-1]==0){
      ans=0;
    }

    printf("%d\n", ans);
    sum=0;
  }

  return 0;
}
