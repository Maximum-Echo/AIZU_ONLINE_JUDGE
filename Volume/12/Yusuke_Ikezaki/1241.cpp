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
