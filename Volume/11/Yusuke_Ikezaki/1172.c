#include <stdio.h>
#include <math.h>

int main(void)
{
  int n,i,j,ans,no;

  while(1){
    scanf("%d", &n);
    if(!n) break;
    if(n==1){
      printf("1\n");
      continue;
    }
    ans=0;
    if(n%2==0){
      for(i=n+1;i<2*n+1;i+=2){
	if(i%2==0) continue;
	for(j=3;j<i/5+1;j+=2){
	  if(i%j==0){
	    no=1; break;
	  }
	}
	if(no==1){
	  no=0; continue;
	}
	ans++;
      }
    } else {
      for(i=n+2;i<2*n+1;i+=2){
	if(i%2==0) continue;
	for(j=3;j<sqrt(i)+1;j+=2){
	  if(i%j==0){
	    no=1; break;
	  }
	}
	if(no==1){
	  no=0; continue;
	}
	ans++;
      }
    }
    printf("%d\n", ans);
  }
    
  return 0;
}
