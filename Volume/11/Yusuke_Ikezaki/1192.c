#include <stdio.h>

int main(void)
{
  int x,y,s,i,j,max,bef1,bef2,aft1,aft2;

  for(;;){
    scanf("%d %d %d", &x, &y, &s);
    if(!(x|y|s)) break;

    max=0;
    for(i=1;i<s+1;i++){
      bef1=i*(100+x)/100;
      for(j=s;j>0;j--){
	bef2=j*(100+x)/100;
	if(bef1+bef2==s){
	  aft1=i*(100+y)/100;
	  aft2=j*(100+y)/100;
	  if(aft1+aft2>max) max=aft1+aft2;
	}
      }
    }
    printf("%d\n", max);
  }

  return 0;
}
