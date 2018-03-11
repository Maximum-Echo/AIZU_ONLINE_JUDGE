<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int num,ans;
  char op;

  scanf("%d", &ans);
  for(;;){
    scanf("%c", &op);
    if(op=='='){
      printf("%d\n", ans);
      break;
    }
    scanf("%d", &num);
    if(op=='+') ans=ans+num;
    if(op=='-') ans=ans-num;
    if(op=='*') ans=ans*num;
    if(op=='/') ans=ans/num;
  }

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int num,ans;
  char op;

  scanf("%d", &ans);
  for(;;){
    scanf("%c", &op);
    if(op=='='){
      printf("%d\n", ans);
      break;
    }
    scanf("%d", &num);
    if(op=='+') ans=ans+num;
    if(op=='-') ans=ans-num;
    if(op=='*') ans=ans*num;
    if(op=='/') ans=ans/num;
  }

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
