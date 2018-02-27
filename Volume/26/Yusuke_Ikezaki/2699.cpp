<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(){
  int d,e;
  while(cin>>d>>e,d){
    double ans=100000.0;
    for(int x=1;x<=d;x++){
      int y=d-x;
      double z=abs(sqrt(x*x+y*y)-e);
      if(z<ans) ans=z;
    }
    printf("%.8f\n",ans);
  }
}
=======
#include <bits/stdc++.h>
using namespace std;

int main(){
  int d,e;
  while(cin>>d>>e,d){
    double ans=100000.0;
    for(int x=1;x<=d;x++){
      int y=d-x;
      double z=abs(sqrt(x*x+y*y)-e);
      if(z<ans) ans=z;
    }
    printf("%.8f\n",ans);
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
