#include <iostream>
#include <algorithm>
using namespace std;

void gcd(int a,int b)
{
  int ans,p,q[10000];

  p=max(a,b); q[0]=min(a,b);
  for(int i=0;;i++){
    if(!q[i]){
      cout<<p<<" "; break;
    }
    q[i+1]=p%q[i]; p=q[i];
  }
}

int lcm(int a,int b)
{
  int ans=0,p=min(a,b),q=max(a,b);

  for(int i=1;;i++){
    for(int j=1;;j++){
      if(p*i==q*j){
	ans=p*i; break;
      }
      if(p*i<q*j) break;
    }
    if(ans) break;
  }
  cout<<ans<<endl;
}

int main()
{
  int a,b;

  while(cin>>a>>b){
    gcd(a,b); lcm(a,b);
  }
}
