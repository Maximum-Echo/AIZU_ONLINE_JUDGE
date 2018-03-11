<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;

int n,ans;

void sqrsum(int mark,int cou,int sum)
{
  for(int i=mark;i<=sqrt(n);i++){
    if(sum+i*i>n) break;
    if(sum+i*i==n){
      ans++; break;
    } else if(sum+i*i<n&&cou<3){
      sqrsum(i,cou+1,sum+i*i);
    }
  }
}

int main()
{
  for(;;){
    cin>>n;
    if(!n) break;
    ans=0;
    sqrsum(1,0,0);
    cout<<ans<<endl;
  }
}
=======
#include <iostream>
#include <cmath>
using namespace std;

int n,ans;

void sqrsum(int mark,int cou,int sum)
{
  for(int i=mark;i<=sqrt(n);i++){
    if(sum+i*i>n) break;
    if(sum+i*i==n){
      ans++; break;
    } else if(sum+i*i<n&&cou<3){
      sqrsum(i,cou+1,sum+i*i);
    }
  }
}

int main()
{
  for(;;){
    cin>>n;
    if(!n) break;
    ans=0;
    sqrsum(1,0,0);
    cout<<ans<<endl;
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
