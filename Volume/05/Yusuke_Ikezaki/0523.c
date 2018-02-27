<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int n,i,j,k,card,max=0,sumT,sumH;
  int T[100]={0};
  int H[100]={0};

  scanf("%d", &n);
  sumT=n;
  sumH=n;
  for(i=0;i<n;i++){
    scanf("%d", &card);
    T[card-1]=1;
  }
  for(i=0;k<n;i++){
    if(T[i]==0){
      H[i]=1;
      k++;
    }
  }
  for(i=0;;i++){
    for(j=0;;j++){
      if(j==n){
	max=0;
	break;
      }
      if(T[j]==1&&j+1>max){
	T[j]=0;
	sumT--;
	max=j+1;
	break;
      }
    }
    if(sumT==0){
      printf("%d\n", sumH);
      break;
    }
    for(j=0;;j++){
      if(j==n){
	max=0;
	break;
      }
      if(H[j]==1&&j+1>max){
	H[j]=0;
	sumH--;
	max=j+1;
	break;
      }
    }
    if(sumH==0){
      printf("%d\n", sumT);
      break;
    }
  }

  return 0;
}
      
=======
#include <stdio.h>

int main(void)
{
  int n,i,j,k,card,max=0,sumT,sumH;
  int T[100]={0};
  int H[100]={0};

  scanf("%d", &n);
  sumT=n;
  sumH=n;
  for(i=0;i<n;i++){
    scanf("%d", &card);
    T[card-1]=1;
  }
  for(i=0;k<n;i++){
    if(T[i]==0){
      H[i]=1;
      k++;
    }
  }
  for(i=0;;i++){
    for(j=0;;j++){
      if(j==n){
	max=0;
	break;
      }
      if(T[j]==1&&j+1>max){
	T[j]=0;
	sumT--;
	max=j+1;
	break;
      }
    }
    if(sumT==0){
      printf("%d\n", sumH);
      break;
    }
    for(j=0;;j++){
      if(j==n){
	max=0;
	break;
      }
      if(H[j]==1&&j+1>max){
	H[j]=0;
	sumH--;
	max=j+1;
	break;
      }
    }
    if(sumH==0){
      printf("%d\n", sumT);
      break;
    }
  }

  return 0;
}
      
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
