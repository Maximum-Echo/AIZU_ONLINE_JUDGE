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
