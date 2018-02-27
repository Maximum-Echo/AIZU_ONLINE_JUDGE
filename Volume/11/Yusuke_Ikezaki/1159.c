#include <stdio.h>

int main(void)
{
  int n,p,i,rem,ans;

  for(;;){
    int pro[50]={0};
    scanf("%d %d", &n, &p);
    if(n==0&&p==0) break;

    rem=p;
    for(i=0;;){
      if(rem==0&&pro[i]!=p){
	rem+=pro[i];
	pro[i]=0;
	if(i<n-1){
	  i++;
	  continue;
	}
	if(i==n-1) i=0;
	continue;
      }
      if(rem>0){
	rem--;
	pro[i]++;
      }
      if(rem==0&&pro[i]==p){
	ans=i;
	break;
      }
      if(i==n-1){
	i=0;
	continue;
      }
      if(i<n-1) i++;
    }
    printf("%d\n", ans);
  }

  return 0;
}
