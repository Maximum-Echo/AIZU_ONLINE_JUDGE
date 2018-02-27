#include <stdio.h>

int main(void)
{
  int N,A,B,C,X,i,j,ans,spe[100];

  for(;;){
    scanf("%d %d %d %d %d", &N, &A, &B, &C, &X);
    if(N==0&&A==0&&B==0&&C==0&&X==0) break;

    ans=0;
    for(i=0;i<N;i++){
      scanf("%d", &spe[i]);
    }
    for(i=0;i<N;i++){
      if(i==0&&X==spe[0]) continue;
      for(j=ans;j<10000;j++){
	X=(A*X+B)%C;
	ans++;
	if(X==spe[i]) break;
	if(X!=spe[i]&&ans==10000) ans=-1;
      }
      if(j==10000) break;
    }
    printf("%d\n", ans);
  }

  return 0;
}
