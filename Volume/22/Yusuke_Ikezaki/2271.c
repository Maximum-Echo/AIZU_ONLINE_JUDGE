#include <stdio.h>
#include <string.h>

int main(void){
  int i,len,min=1000,ans[4]={0};
  char str[301];

  scanf("%s", str);
  len=strlen(str);
  for(i=0;i<len;i++){
    if(str[i]=='K') ans[0]++;
    if(str[i]=='U') ans[1]++;
    if(str[i]=='P') ans[2]++;
    if(str[i]=='C') ans[3]++;
  }
  for(i=0;i<4;i++){
    if(ans[i]<min) min=ans[i];
  }
  printf("%d\n", min);

  return 0;
}
