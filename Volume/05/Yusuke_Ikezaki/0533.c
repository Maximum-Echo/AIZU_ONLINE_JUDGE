<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int W[100]={0};
  int K[100]={0};
  int i,j,k,scr,sumW=0,sumK=0;

  for(i=0;i<10;i++){
    scanf("%d", &scr);
    W[scr]++;
  }
  for(j=0;j<10;j++){
    scanf("%d", &scr);
    K[scr]++;
  }
  for(i=0;i<3;){
    for(j=100;j!=0;j--){
      if(i==3) break;
      if(W[j]!=0){
	for(k=0;k<W[j];k++){
	  if(i==3) break;
	  sumW=sumW+j;
	  i++;
	}
      }
    }
  }
  for(i=0;i<3;){
    for(j=100;j!=0;j--){
      if(i==3) break;
      if(K[j]!=0){
	for(k=0;k<K[j];k++){
	  if(i==3) break;
	  sumK=sumK+j;
	  i++;
	}
      }
    }
  }
  printf("%d ", sumW);
  printf("%d\n", sumK);

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int W[100]={0};
  int K[100]={0};
  int i,j,k,scr,sumW=0,sumK=0;

  for(i=0;i<10;i++){
    scanf("%d", &scr);
    W[scr]++;
  }
  for(j=0;j<10;j++){
    scanf("%d", &scr);
    K[scr]++;
  }
  for(i=0;i<3;){
    for(j=100;j!=0;j--){
      if(i==3) break;
      if(W[j]!=0){
	for(k=0;k<W[j];k++){
	  if(i==3) break;
	  sumW=sumW+j;
	  i++;
	}
      }
    }
  }
  for(i=0;i<3;){
    for(j=100;j!=0;j--){
      if(i==3) break;
      if(K[j]!=0){
	for(k=0;k<K[j];k++){
	  if(i==3) break;
	  sumK=sumK+j;
	  i++;
	}
      }
    }
  }
  printf("%d ", sumW);
  printf("%d\n", sumK);

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
