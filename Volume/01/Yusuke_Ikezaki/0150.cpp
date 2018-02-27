#include <iostream>
using namespace std;

#define NUM 10000
bool prime[NUM+1];

void sieve()
{
  prime[0]=prime[1]=false;
  for(int i=2;i<=NUM;i++)
    prime[i]=true;
  for(int i=2;i<=NUM;i++)
    if(prime[i])
      for(int j=i*2;j<=NUM;j+=i)
	prime[j]=false;
}

int main()
{
  int n;

  sieve();
  for(;;){
    cin>>n;
    if(!n) break;
    for(int i=n;i>=5;i--)
      if(prime[i]&&prime[i-2]){
	cout<<i-2<<" "<<i<<endl; break;
      }
  }
}
