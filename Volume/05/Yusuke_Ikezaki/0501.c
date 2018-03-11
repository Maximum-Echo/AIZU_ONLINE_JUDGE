<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int n,m,i,j,k,l,o;

  for(;;){
    scanf("%d", &n);
    if(n==0) break;
    char cvs[n][2];

    for(i=0;i<n;i++){
      for(j=0;j<2;j++){
	scanf("%s", &cvs[i][j]);
      }
    }

    scanf("%d", &m);
    char data[m];

    for(k=0;k<m;k++){
      scanf("%s", &data[k]);
      for(l=0;l<n;l++){
	if(data[k]==cvs[l][0]){
	  data[k]=cvs[l][1]; break;
	}
      }
    }

    printf("%s\n", data);
  }

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int n,m,i,j,k,l,o;

  for(;;){
    scanf("%d", &n);
    if(n==0) break;
    char cvs[n][2];

    for(i=0;i<n;i++){
      for(j=0;j<2;j++){
	scanf("%s", &cvs[i][j]);
      }
    }

    scanf("%d", &m);
    char data[m];

    for(k=0;k<m;k++){
      scanf("%s", &data[k]);
      for(l=0;l<n;l++){
	if(data[k]==cvs[l][0]){
	  data[k]=cvs[l][1]; break;
	}
      }
    }

    printf("%s\n", data);
  }

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
