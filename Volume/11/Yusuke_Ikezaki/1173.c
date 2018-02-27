#include <stdio.h>
#include <string.h>

int main(void)
{
  int len,i,ml,mr,kl,kr,unl;
  char str[101],res[101];

  for(;;){
    gets(str);
    if(!strcmp(str,".")) break;

    unl=0;
    len=strlen(str);
    for(i=0;i<len;i++){
      if(str[i]=='('||str[i]=='['){
	res[unl++]=str[i];
      } else if(str[i]==')'||str[i]==']'){
	if(unl!=0&&(res[unl-1]==str[i]-1||res[unl-1]==str[i]-2)) unl--;
	else break;
      }
    }
    if(unl!=0||i!=len) puts("no");
    else puts("yes");
  }

  return 0;
}
