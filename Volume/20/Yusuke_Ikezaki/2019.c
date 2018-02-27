#include <stdio.h>

int main(void)
{
  int n,d[10000],p[10000],i,j,sum,sumd,tmp1,tmp2;
  long long int m;

  for(;;){
    scanf("%d %d", &n, &m);
    if(!(n|m)) break;

    for(i=0,sumd=0;i<n;i++){
      scanf("%d %d", &d[i], &p[i]);
      sumd+=d[i];
    }
    if(m>=sumd){
      printf("0\n"); continue;
    }
    for(i=0;i<n-1;i++){
      for(j=0;j<n-1;j++){
	if(p[j]<p[j+1]){
	  tmp1=p[j]; p[j]=p[j+1]; p[j+1]=tmp1;
	  tmp2=d[j]; d[j]=d[j+1]; d[j+1]=tmp2;
	}
      }
    }
    for(i=0;i<n;i++){
      if(m>=d[i]){
	m-=d[i]; d[i]=0;
      } else if(m<d[i]){
	d[i]-=m; m=0;
      }
      if(!m) break;
    }
    for(i=0,sum=0;i<n;i++){
      if(p[i]) sum+=d[i]*p[i];
    }
    printf("%d\n", sum);
  }

  return 0;
}
