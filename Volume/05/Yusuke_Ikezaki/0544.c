<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int cell[1000],dice[1000],N,M,piece,i,j,k,ans;

  for(;;){
    scanf("%d %d", &N, &M);
    if(N==0&&M==0) break;

    piece=0;
    for(i=0;i<N;i++){
      scanf("%d", &cell[i]);
    }
    for(j=0;j<M;j++){
      scanf("%d", &dice[j]);
    }
    for(k=0;k<M;k++){
      piece=piece+dice[k];
      if(cell[piece]>=0){
	piece=piece+cell[piece];
      } else if(cell[piece]<0){
	piece=piece-abs(cell[piece]);
      }

      if(piece>=N-1){
	ans=k+1;
	break;
      }
    }

    printf("%d\n", ans);
  }

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int cell[1000],dice[1000],N,M,piece,i,j,k,ans;

  for(;;){
    scanf("%d %d", &N, &M);
    if(N==0&&M==0) break;

    piece=0;
    for(i=0;i<N;i++){
      scanf("%d", &cell[i]);
    }
    for(j=0;j<M;j++){
      scanf("%d", &dice[j]);
    }
    for(k=0;k<M;k++){
      piece=piece+dice[k];
      if(cell[piece]>=0){
	piece=piece+cell[piece];
      } else if(cell[piece]<0){
	piece=piece-abs(cell[piece]);
      }

      if(piece>=N-1){
	ans=k+1;
	break;
      }
    }

    printf("%d\n", ans);
  }

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
