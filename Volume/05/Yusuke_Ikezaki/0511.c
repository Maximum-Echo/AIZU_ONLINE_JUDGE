#include <stdio.h>

int main(void)
{
  int num[28];
  int ans[30]={0};
  int i;

  for(i=0;i<28;i++){
    scanf("%d", &num[i]);
    ans[num[i]-1]=1;
  }
  for(i=0;i<30;i++){
    if(ans[i]==0) printf("%d\n", i+1);
  }

  return 0;
}
