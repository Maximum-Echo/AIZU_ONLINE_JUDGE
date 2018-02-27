#include <stdio.h>

int main(void)
{
  int n,m[100],q,p[100][100],l[100],i,j,k,ans,ansi,end;

  for(;;){
    scanf("%d", &n);
    if(!n) break;

    for(i=0;i<n;i++){
      scanf("%d", &m[i]);
      for(j=0;j<m[i];j++){
	scanf("%d", &p[i][j]);
      }
    }
    scanf("%d", &q);
    int can[100]={0};
    for(i=0;i<q;i++){
      scanf("%d", &l[i]);
      for(j=0,end=0;j<n;j++){
	for(k=0;k<m[j];k++){
	  if(l[i]==p[j][k]){
	    can[j]++; end=1; break;
	  }
	}
      }
    }
    for(i=0,ans=0,ansi=0;i<n;i++){
      if(can[i]==q){
	ans++; ansi+=i+1;
      }
    }
    if(ans==1) printf("%d\n", ansi); 
    else printf("-1\n");
  }

  return 0;
}
