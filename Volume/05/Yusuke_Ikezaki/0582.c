<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int la,lb,lc,arc,ll,m1,m2,num=0,tria=0,trib=0,tric=0;

  for(;;){
    scanf("%d %d %d", &la, &lb, &lc);
    if(la>lb&&la>lc){
      ll=la;
      m1=lb;
      m2=lc;
    } else if(lb>la&&lb>lc){
      ll=lb;
      m1=la;
      m2=lc;
    } else if(lc>la&&lc>lb){
      ll=lc;
      m1=la;
      m2=lb;
    } else {
      trib++;
      num++;
      continue;
    }
    if(ll>=m1+m2) break;
    num++;
    arc=m1*m1+m2*m2-ll*ll;
    if(arc==0) tria++;
    if(arc>0) trib++;
    if(arc<0) tric++;
  }
  printf("%d %d %d %d\n", num, tria, trib, tric);

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int la,lb,lc,arc,ll,m1,m2,num=0,tria=0,trib=0,tric=0;

  for(;;){
    scanf("%d %d %d", &la, &lb, &lc);
    if(la>lb&&la>lc){
      ll=la;
      m1=lb;
      m2=lc;
    } else if(lb>la&&lb>lc){
      ll=lb;
      m1=la;
      m2=lc;
    } else if(lc>la&&lc>lb){
      ll=lc;
      m1=la;
      m2=lb;
    } else {
      trib++;
      num++;
      continue;
    }
    if(ll>=m1+m2) break;
    num++;
    arc=m1*m1+m2*m2-ll*ll;
    if(arc==0) tria++;
    if(arc>0) trib++;
    if(arc<0) tric++;
  }
  printf("%d %d %d %d\n", num, tria, trib, tric);

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
