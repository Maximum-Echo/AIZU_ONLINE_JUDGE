<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int n,i,ans;
  int s[100];

  for(;;){
    int max=0,min=1000,sum=0;
    scanf("%d", &n);
    if(n==0) break;

    for(i=0;i<n;i++){
      scanf("%d", &s[i]);
      if(s[i]>max) max=s[i];
      if(s[i]<min) min=s[i];
      sum+=s[i];
    }
    ans=(sum-max-min)/(n-2);
    printf("%d\n", ans);
  }

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int n,i,ans;
  int s[100];

  for(;;){
    int max=0,min=1000,sum=0;
    scanf("%d", &n);
    if(n==0) break;

    for(i=0;i<n;i++){
      scanf("%d", &s[i]);
      if(s[i]>max) max=s[i];
      if(s[i]<min) min=s[i];
      sum+=s[i];
    }
    ans=(sum-max-min)/(n-2);
    printf("%d\n", ans);
  }

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
