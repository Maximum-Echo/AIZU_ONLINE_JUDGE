#include <stdio.h>

int main(void)
{
  int e,y,z,m,cuz,sqy;

  for(;;){
    scanf("%d", &e);
    if(!e) break;

    m=1000000;
    for(z=0;z*z*z<=e;z++){
      cuz=z*z*z;
      for(y=0;y*y<=e-cuz;y++){
	sqy=y*y;
	if(e-sqy-cuz+y+z<m){
	  m=e-sqy-cuz+y+z;
	}
      }
    }
    printf("%d\n", m);
  }

  return 0;
}
