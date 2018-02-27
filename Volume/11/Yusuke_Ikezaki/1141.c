<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(void)
{
  int a,d,n,i,j,sum,ans,no;

  for(;;){
    scanf("%d %d %d", &a, &d, &n);
    if(!(a|d|n)) break;

    sum=0; no=0;
    if(a==1&&d==1){
      sum++; ans=2; a=3;
    } else if(a==1){
      a+=d;
    } else if(a==2){
      sum++; ans=2; a+=d;
    }
    for(i=a;sum<n;i+=d){
      if(i%2==0) continue;
      for(j=3;j<sqrt(i)+1;j+=2){
	if(i%j==0){
	  no=1; break;
	}
      }
      if(no==0){
	ans=i; sum++;
      }
      no=0;
    }
    printf("%d\n", ans);
  }

  return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main(void)
{
  int a,d,n,i,j,sum,ans,no;

  for(;;){
    scanf("%d %d %d", &a, &d, &n);
    if(!(a|d|n)) break;

    sum=0; no=0;
    if(a==1&&d==1){
      sum++; ans=2; a=3;
    } else if(a==1){
      a+=d;
    } else if(a==2){
      sum++; ans=2; a+=d;
    }
    for(i=a;sum<n;i+=d){
      if(i%2==0) continue;
      for(j=3;j<sqrt(i)+1;j+=2){
	if(i%j==0){
	  no=1; break;
	}
      }
      if(no==0){
	ans=i; sum++;
      }
      no=0;
    }
    printf("%d\n", ans);
  }

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
