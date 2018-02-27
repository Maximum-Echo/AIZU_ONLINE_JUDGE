#include <stdio.h>

const int *tile[22][22];
int sum;

void search(int w,int h)
{
  if(tile[w][h]==1){
    tile[w][h]=0; sum++;
    search(w,h-1);
    search(w-1,h);
    search(w+1,h);
    search(w,h+1);
  } else if(tile[w][h]==0){
    if(tile[w][h-1]==1) search(w,h-1);
    if(tile[w-1][h]==1) search(w-1,h);
    if(tile[w+1][h]==1) search(w+1,h);
    if(tile[w][h+1]==1) search(w,h+1);
  }
}

int main(void)
{
  int w,h,i,j,sx,sy,c;
  
  for(;;){
    scanf("%d %d", &w, &h);
    if(!(w|h)) break;

    for(i=1;i<h+1;i++)
      for(j=1;j<w+1;j++){
	c=getchar();
	if(c=='#') tile[i][j]=-1;
	else if(c=='.') tile[i][j]=1;
	else if(c=='@'){
	  tile[i][j]=1; sx=j; sy=i;
	}
      }
    search(sx,sy);
    printf("%d\n", sum);
  }

  return 0;
}
