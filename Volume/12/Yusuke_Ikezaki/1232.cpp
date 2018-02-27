#include <iostream>
#include <cmath>
using namespace std;

const int MAX_N=100000;
bool prime[MAX_N+1];
int m,p,q;
double dab,dpq;

void sieve()
{
  prime[0]=prime[1]=false;
  for(int i=2;i<=MAX_N;++i)
    prime[i]=true;
  for(int i=2;i<=MAX_N;++i)
    if(prime[i])
      for(int j=i*2;j<=MAX_N;j+=i)
	prime[j]=false;
}

void product()
{
  int upper=0;
  for(int i=0;i<=sqrt(m);i++)
    if(prime[i])
      for(int j=i;j<=m/2;j++){
	if(prime[j]){
	  dpq=(double)i/j;
	  if(upper<=i*j&&i*j<=m&&dpq>=dab){
	    p=i; q=j; upper=p*q;
	  }
	}
      }
}

int main()
{
  int a,b;

  sieve();
  for(;;){
    cin>>m>>a>>b;
    if(!(m|a|b)) break;
    dab=(double)a/b;
    product();
    cout<<p<<" "<<q<<endl;
  }
}
