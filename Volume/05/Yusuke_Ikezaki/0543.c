#include <stdio.h>

int main(void)
{
  int sum,pri,i;

  for(;;){
    scanf("%d", &sum);
    if(sum==0) break;

    pri=0;
    for(i=0;i<9;i++){
      scanf("%d", &pri);
      sum=sum-pri;
    }

    printf("%d\n", sum);
  }

  return 0;
}
