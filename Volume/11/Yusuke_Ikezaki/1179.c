#include <stdio.h>

int main(void)
{
  int n,Y[100],M[100],D[100],i,j,k,l,ans,L,sum;

  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d %d %d", &Y[i], &M[i], &D[i]);
    sum=0;
    for(j=Y[i];;j++){
      if(Y[i]==1000) break;
      for(k=M[i];k<11;k++){
	if(j%3==0) L=20;
	else if(j%3!=0&&k%2==1) L=20;
	else if(j%3!=0&&k%2==0) L=19;
	for(l=D[i];l<L+1;l++){ 
	  if(D[i]==L) D[i]=1;
	  else if(D[i]<L) D[i]++;
	  sum++;
	}
        if(M[i]==10) M[i]=1;
	else if(M[i]<10) M[i]++;
      }
      Y[i]++;
    }
    printf("%d\n", sum);
  }

  return 0;
}
