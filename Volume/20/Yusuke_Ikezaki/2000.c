#include <stdio.h>

int main(void)
{
  int N,M,l,ch,i,j,x,y,sum,nowx,nowy;
  char d;

  for(;;){
    int gem[21][21]={0};
    sum=0;
    nowx=10;
    nowy=10;
    scanf("%d", &N);
    if(N==0) break;

    for(i=0;i<N;i++){
      scanf("%d %d", &x, &y);
      gem[x][y]++;
    }
    scanf("%d", &M);
    while((ch=getchar())!='\n');
    for(i=0;i<M;i++){
      scanf("%c %d", &d, &l);
      while((ch=getchar())!='\n');
      if(d=='N'){
	for(j=0;j<l;j++){
	  nowy++;
	  if(gem[nowx][nowy]){
	    gem[nowx][nowy]=0;
	    sum++;
	  }
	}
      } else if(d=='E'){
	for(j=0;j<l;j++){
	  nowx++;
	  if(gem[nowx][nowy]==1){
	    gem[nowx][nowy]=0;
	    sum++;
	  }
	}
      } else if(d=='W'){
	for(j=0;j<l;j++){
	  nowx--;
	  if(gem[nowx][nowy]==1){
	    gem[nowx][nowy]=0;
	    sum++;
	  }
	}
      } else if(d=='S'){
	for(j=0;j<l;j++){
	  nowy--;
	  if(gem[nowx][nowy]==1){
	    gem[nowx][nowy]=0;
	    sum++;
	  }
	}
      }
    }
    if(sum==N){
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }

  return 0;
}
