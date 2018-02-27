#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
  int e,x,y,z,m;

  for(;;){
    scanf("%d", &e);
    if(!e) break;

    m=1000000;
    for(z=pow(e,1.1/3.0);z>=0;z--){
      if(z>=m) continue;
      if(z*z*z==e){
	m=z; break;
      }
      if(z*z*z>e) continue;
      for(y=0;y<=sqrt(e);y++){
	if(y+z>=m) break;
	if(y*y+z>e) break;
	for(x=0;x<=e;x++){
	  if(x+y+z>=m) break;
	  if(x+y*y+z*z*z==e){
	    m=x+y+z; break;
	  }
	  if(x+y*y+z*z*z>e) break;
	}
      }
    }
    printf("%d\n", m);
  }
}
