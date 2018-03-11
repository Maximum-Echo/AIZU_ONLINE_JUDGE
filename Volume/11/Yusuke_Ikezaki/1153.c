<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int n,m,i,j,sumt,sumh,anst,ansh,min;
  int t[100],h[100];

  for(;;){
    sumt=0,sumh=0,anst=-1,ansh=-1,min=200;
    scanf("%d %d", &n, &m);
    if(n==0&&m==0) break;

    for(i=0;i<n;i++){
      scanf("%d", &t[i]);
      sumt+=t[i];
    }
    for(i=0;i<m;i++){
      scanf("%d", &h[i]);
      sumh+=h[i];
    }
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
	if(sumt-t[i]+h[j]==sumh-h[j]+t[i]&&t[i]+h[j]<min){
	  anst=t[i];
	  ansh=h[j];
	  min=t[i]+h[j];
	}
      }
    }
    if(anst>=0&&ansh>=0){
      printf("%d %d\n", anst, ansh);
    } else {
      printf("-1\n");
    }
  }
  
  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int n,m,i,j,sumt,sumh,anst,ansh,min;
  int t[100],h[100];

  for(;;){
    sumt=0,sumh=0,anst=-1,ansh=-1,min=200;
    scanf("%d %d", &n, &m);
    if(n==0&&m==0) break;

    for(i=0;i<n;i++){
      scanf("%d", &t[i]);
      sumt+=t[i];
    }
    for(i=0;i<m;i++){
      scanf("%d", &h[i]);
      sumh+=h[i];
    }
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
	if(sumt-t[i]+h[j]==sumh-h[j]+t[i]&&t[i]+h[j]<min){
	  anst=t[i];
	  ansh=h[j];
	  min=t[i]+h[j];
	}
      }
    }
    if(anst>=0&&ansh>=0){
      printf("%d %d\n", anst, ansh);
    } else {
      printf("-1\n");
    }
  }
  
  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
