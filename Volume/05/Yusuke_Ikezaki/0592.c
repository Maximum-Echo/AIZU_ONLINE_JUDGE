<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int scr[5],i,sum=0,ans;

  for(i=0;i<5;i++){
    scanf("%d", &scr[i]);
    if(scr[i]>=40) sum+=scr[i];
    if(scr[i]<40) sum+=40;
  }
  ans=sum/5;
  printf("%d\n", ans);

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int scr[5],i,sum=0,ans;

  for(i=0;i<5;i++){
    scanf("%d", &scr[i]);
    if(scr[i]>=40) sum+=scr[i];
    if(scr[i]<40) sum+=40;
  }
  ans=sum/5;
  printf("%d\n", ans);

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
