#include <stdio.h>

int main(void)
{
  int sum=0,i,ansm,anss;
  int time[4];

  for(i=0;i<4;i++){
    scanf("%d", &time[i]);
    sum=sum+time[i];
  }
  anss=sum%60;
  ansm=(sum-anss)/60;

  printf("%d\n", ansm);
  printf("%d\n", anss);

  return 0;
}
