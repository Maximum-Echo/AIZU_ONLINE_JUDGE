#include <stdio.h>

int main(void)
{
  int p[3],j[2],ans,minp,minj,i;

  scanf("%d", &p[0]);
  minp=p[0];
  for(i=1;i<3;i++){
    scanf("%d", &p[i]);
    if(p[i]<minp) minp=p[i];
  }
  scanf("%d", &j[0]);
  minj=j[0];
  scanf("%d", &j[1]);
  if(j[1]<minj) minj=j[1];

  printf("%d\n", minp+minj-50);

  return 0;
}
