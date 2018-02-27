<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int n,m,a,h,p,q,i,j,hmax;

  for(;;){
    scanf("%d %d %d", &n, &m, &a);
    if(n==0&&m==0&&a==0) break;

    int line[100][1000]={0};
    hmax=0;
    for(i=0;i<m;i++){
      scanf("%d %d %d", &h, &p, &q);
      line[p-1][h-1]=1;
      if(h>hmax) hmax=h;
    }
    for(i=hmax-1;i>=0;i--){
      for(j=0;j<n;j++){
	if(line[j][i]==1&&a==j+1){
	  a++; break;
	} else if(line[j][i]==1&&a==j+2){
	  a--; break;
	}
      }
    }
    printf("%d\n", a);
  }

  return 0;
}
    
=======
#include <stdio.h>

int main(void)
{
  int n,m,a,h,p,q,i,j,hmax;

  for(;;){
    scanf("%d %d %d", &n, &m, &a);
    if(n==0&&m==0&&a==0) break;

    int line[100][1000]={0};
    hmax=0;
    for(i=0;i<m;i++){
      scanf("%d %d %d", &h, &p, &q);
      line[p-1][h-1]=1;
      if(h>hmax) hmax=h;
    }
    for(i=hmax-1;i>=0;i--){
      for(j=0;j<n;j++){
	if(line[j][i]==1&&a==j+1){
	  a++; break;
	} else if(line[j][i]==1&&a==j+2){
	  a--; break;
	}
      }
    }
    printf("%d\n", a);
  }

  return 0;
}
    
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
