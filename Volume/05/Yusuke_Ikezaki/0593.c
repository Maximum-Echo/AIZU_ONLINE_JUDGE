<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int n,m,co[1000],mo[1000],i,j,max=0,ans;
  int vo[1000]={0};

  scanf("%d %d", &n, &m);
  for(i=0;i<n;i++){
    scanf("%d", &co[i]);
  }
  for(i=0;i<m;i++){
    scanf("%d", &mo[i]);
    for(j=0;j<n;j++){
      if(mo[i]>=co[j]){
	vo[j]++;
	break;
      }
    }
  }
  for(i=0;i<n;i++){
    if(vo[i]>max){
      max=vo[i];
      ans=i+1;
    }
  }
  printf("%d\n", ans);

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int n,m,co[1000],mo[1000],i,j,max=0,ans;
  int vo[1000]={0};

  scanf("%d %d", &n, &m);
  for(i=0;i<n;i++){
    scanf("%d", &co[i]);
  }
  for(i=0;i<m;i++){
    scanf("%d", &mo[i]);
    for(j=0;j<n;j++){
      if(mo[i]>=co[j]){
	vo[j]++;
	break;
      }
    }
  }
  for(i=0;i<n;i++){
    if(vo[i]>max){
      max=vo[i];
      ans=i+1;
    }
  }
  printf("%d\n", ans);

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
