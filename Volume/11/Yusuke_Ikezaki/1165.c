#include <stdio.h>

int main(void)
{
  int N,i,j,n,d,top,left,right,bottom;

  for(;;){
    scanf("%d", &N);
    if(!N) break;

    int squ[400][400]={0};
    int posx[200]={0}; int posy[200]={0};
    squ[200][200]=1;
    posx[0]=200; posy[0]=200;
    for(i=1;i<N;i++){
      scanf("%d %d", &n, &d);
      if(d==0){
	posx[i]=posx[n]-1; posy[i]=posy[n];
      } else if(d==1){
	posx[i]=posx[n]; posy[i]=posy[n]-1;
      } else if(d==2){
	posx[i]=posx[n]+1; posy[i]=posy[n];
      } else if(d==3){
	posx[i]=posx[n]; posy[i]=posy[n]+1;
      }
      squ[posx[i]][posy[i]]=1;
    }
    for(i=0;i<201;i++){
      for(j=0;j<400;j++){
	if(squ[j][i]==1){
	  top=i; i=200; break;
	}
      }
    }
    for(i=0;i<201;i++){
      for(j=0;j<400;j++){
	if(squ[i][j]==1){
	  left=i; i=200;  break;
	}
      }
    }
    for(i=399;i>199;i--){
      for(j=0;j<400;j++){
	if(squ[i][j]==1){
	  right=i; i=200;  break;
	}
      }
    }
    for(i=399;i>199;i--){
      for(j=0;j<400;j++){
	if(squ[j][i]==1){
	  bottom=i; i=200;  break;
	}
      }
    }
    printf("%d %d\n", right-left+1, bottom-top+1);
  }

  return 0;
}
