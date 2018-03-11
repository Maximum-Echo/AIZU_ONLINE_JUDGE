#include <stdio.h>

int main(void)
{
  int n,q,m,i,j,sum,max,ans,date[50][50];

  for(;;){
    scanf("%d %d", &n, &q);
    if(!(n|q)) break;

    int con[101]={0};
    max=0;
    sum=0;
    ans=500;
    for(i=0;i<n;i++){
      scanf("%d", &m);
      for(j=0;j<m;j++){
	scanf("%d", &date[i][j]);
	con[date[i][j]]++;
	if(date[i][j]>max) max=date[i][j];
      }
    }
    for(i=max;i>0;i--){
      if(con[i]>=sum){
	sum=con[i];
	ans=i;
      }
    }
    if(sum>=q) printf("%d\n", ans);
    if(sum<q) printf("0\n");
  }

  return 0;
}
