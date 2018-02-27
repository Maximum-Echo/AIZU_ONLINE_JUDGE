#include <stdio.h>

int main(void)
{
  int n,a,i,sum=1;
  char inp[100];
  
  gets(inp);
  for(i=0;inp[i]!='\0';){
    if(inp[i]==inp[i+1]) sum++;
    if(inp[i]!=inp[i+1]){
      printf("%d%c", sum, inp[i]);
      i=i+sum;
      sum=1;
    }
  }

  return 0;
}
