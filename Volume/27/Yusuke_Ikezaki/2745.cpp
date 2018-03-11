<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
  int r0,w0,c,r;
  for(;;){
    cin>>r0>>w0>>c>>r;
    if(!r0&&!w0&&!c&&!r) break;
    
    int ans=w0*c-r0;
    if(ans<0) cout<<"0"<<endl;
    else if(ans%r==0) cout<<ans/r<<endl;
    else cout<<ans/r+1<<endl;
  }
}
=======
#include <iostream>
using namespace std;

int main(){
  int r0,w0,c,r;
  for(;;){
    cin>>r0>>w0>>c>>r;
    if(!r0&&!w0&&!c&&!r) break;
    
    int ans=w0*c-r0;
    if(ans<0) cout<<"0"<<endl;
    else if(ans%r==0) cout<<ans/r<<endl;
    else cout<<ans/r+1<<endl;
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
