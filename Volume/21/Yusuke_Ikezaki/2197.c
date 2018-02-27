#include <stdio.h>

int main(void)
{
  int N,i,j,sum=0,ans=0;
  
  for(;;){
    scanf("%d", &N);
    if(N==0) break;
    if(N==1){
      printf("0\n");
      continue;
    }
    
    if(N%2==1) ans=1;
    for(i=1;i<N/2;i++){
      for(j=i;;j++){
	sum+=j;
	if(sum>N) break;
	if(sum==N) ans++;
      }
      sum=0;
    }
    printf("%d\n", ans);
    ans=0;
  }

  return 0;
}
