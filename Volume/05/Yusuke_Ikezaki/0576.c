<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int L,A,B,C,D,day=0,endA=0,endB=0,ans;

  scanf("%d", &L);
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &D);

  for(;;){
    if(A>0){
      A=A-C;
    } else {
      endA++;
    }
    if(B>0){
      B=B-D;
    } else {
      endB++;
    }
    if(endA>0&&endB>0) break;
    day++;
  }

  ans=L-day;
  printf("%d\n", ans);

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int L,A,B,C,D,day=0,endA=0,endB=0,ans;

  scanf("%d", &L);
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &D);

  for(;;){
    if(A>0){
      A=A-C;
    } else {
      endA++;
    }
    if(B>0){
      B=B-D;
    } else {
      endB++;
    }
    if(endA>0&&endB>0) break;
    day++;
  }

  ans=L-day;
  printf("%d\n", ans);

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
