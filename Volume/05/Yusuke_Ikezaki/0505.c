#include <stdio.h>

int main(void)
{
  int n,m,i,j,sum;

  for(;;){
    sum=1;
    int Q[1000][100]={0};
    int ans[100]={0};
    scanf("%d %d", &n, &m);
    if(n==0&&m==0) break;

    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
	scanf("%d", &Q[i][j]);
	if(Q[i][j]==1) ans[j]++;
      }
    }

    for(i=0;i<n+1;i++){
      for(j=0;j<m;j++){
	if(ans[j]==n-i&&sum==m){
	  printf("%d\n", j+1);
	  sum++;
	  break;
	}
	if(ans[j]==n-i&&sum<m){
	  printf("%d ", j+1);
	  sum++;
	}
      }
      if(sum>m) break;
    }
  }

  return 0;
}
