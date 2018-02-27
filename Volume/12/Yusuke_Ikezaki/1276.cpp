#include <iostream>
using namespace std;

const int MAX_N=1299709;
bool prime[MAX_N+1];

void sieve()
{
  prime[0]=prime[1]=false;
  for(int i=2;i<=MAX_N;i++)
    prime[i]=true;
  for(int i=2;i<=MAX_N;i++)
    if(prime[i])
      for(int j=i*2;j<=MAX_N;j+=i)
	prime[j]=false;
}

int is_prime(int n)
{
  return prime[n];
}

int main()
{
  int n,sum;

  sieve();
  for(;;){
    cin>>n;
    if(!n) break;

    sum=0;
    for(int i=n;;i++){
      if(is_prime(i)) break;
      sum++;
    }
    for(int i=n;;i--){
      if(is_prime(i)) break;
      sum++;
    }
    cout<<sum<<endl;
  }
}
