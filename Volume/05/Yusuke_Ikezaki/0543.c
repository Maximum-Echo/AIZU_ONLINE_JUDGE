<<<<<<< HEAD
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
=======
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
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
