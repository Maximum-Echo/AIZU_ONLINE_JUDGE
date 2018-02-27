#include <stdio.h>
#include <string.h>

int main(void)
{
  int n,m,i,j,door=0;
  char u[256][11],ID[256][11];

  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%s", u[i]);
  }
  scanf("%d", &m);
  for(i=0;i<m;i++){
    scanf("%s", ID[i]);
  }
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(strcmp(ID[i],u[j])==0){
	if(door==0){
	  printf("Opened by %s\n", ID[i]);
	  door=1;
	} else {
	  printf("Closed by %s\n", ID[i]);
	  door=0;
	}
	break;
      }
      if(j==n-1) printf("Unknown %s\n", ID[i]);
    }
  }

  return 0;
}
