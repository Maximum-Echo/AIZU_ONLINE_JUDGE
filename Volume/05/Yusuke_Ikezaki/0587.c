<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int n,m,i,in[10000],out[10000],rem,max,err=0;

  scanf("%d", &n);
  scanf("%d", &m);
  rem=m;
  max=m;
  for(i=0;i<n;i++){
    scanf("%d %d", &in[i], &out[i]);
    rem=rem+in[i]-out[i];
    if(rem<0) err++;
    if(rem>max) max=rem;
  }
  if(err==0) printf("%d\n", max);
  if(err>0) printf("0\n");

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int n,m,i,in[10000],out[10000],rem,max,err=0;

  scanf("%d", &n);
  scanf("%d", &m);
  rem=m;
  max=m;
  for(i=0;i<n;i++){
    scanf("%d %d", &in[i], &out[i]);
    rem=rem+in[i]-out[i];
    if(rem<0) err++;
    if(rem>max) max=rem;
  }
  if(err==0) printf("%d\n", max);
  if(err>0) printf("0\n");

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
