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
