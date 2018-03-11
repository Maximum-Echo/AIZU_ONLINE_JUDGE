<<<<<<< HEAD
#include <stdio.h>

const int *map[52][52];

void search(int w,int h)
{
  if(map[w][h]){
    map[w][h]=0;
    search(w-1,h-1);
    search(w,h-1);
    search(w+1,h-1);
    search(w-1,h);
    search(w+1,h);
    search(w-1,h+1);
    search(w,h+1);
    search(w+1,h+1);
  }
}

int main(void)
{
  int w,h,i,j,ans;
  
  for(;;){
    scanf("%d %d", &w, &h);
    if(!(w|h)) break;

    for(i=1;i<h+1;i++)
      for(j=1;j<w+1;j++)
	scanf("%d", &map[j][i]);
    for(i=1,ans=0;i<h+1;i++)
      for(j=1;j<w+1;j++)
	if(map[j][i]){
	  ans++;
	  search(j,i);
	}
    printf("%d\n", ans);
  }

  return 0;
}
=======
#include <stdio.h>

const int *map[52][52];

void search(int w,int h)
{
  if(map[w][h]){
    map[w][h]=0;
    search(w-1,h-1);
    search(w,h-1);
    search(w+1,h-1);
    search(w-1,h);
    search(w+1,h);
    search(w-1,h+1);
    search(w,h+1);
    search(w+1,h+1);
  }
}

int main(void)
{
  int w,h,i,j,ans;
  
  for(;;){
    scanf("%d %d", &w, &h);
    if(!(w|h)) break;

    for(i=1;i<h+1;i++)
      for(j=1;j<w+1;j++)
	scanf("%d", &map[j][i]);
    for(i=1,ans=0;i<h+1;i++)
      for(j=1;j<w+1;j++)
	if(map[j][i]){
	  ans++;
	  search(j,i);
	}
    printf("%d\n", ans);
  }

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
