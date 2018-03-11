#include <stdio.h>

int main(void){
  int t,n,i,j,up=0,down=0;
  int h[100][1000];

  scanf("%d", &t);
  for(i=0;i<t;i++){
    scanf("%d", &n);
    scanf("%d", &h[i][0]);
    for(j=1;j<n;j++){
      scanf("%d", &h[i][j]);
      if(h[i][j]-h[i][j-1]>up){
	up=h[i][j]-h[i][j-1];
      } else if(h[i][j-1]-h[i][j]>down){
	down=h[i][j-1]-h[i][j];
      }
    }
    printf("%d %d\n", up, down);
    up=0;
    down=0;
  }

  return 0;
}
