#include <stdio.h>

int main(void)
{
  int n,num[3],i;
  long min=100000000;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d", &num[i]);
    if(num[i]<min) min=num[i];
  }
  for(i=1;i<min+1;i++){
    if(n==2){
      if(num[0]%i==0&&num[1]%i==0){
	printf("%d\n", i);
      }
    }
    if(n==3){
      if(num[0]%i==0&&num[1]%i==0&&num[2]%i==0){
	printf("%d\n", i);
      }
    }
  }

  return 0;
}
