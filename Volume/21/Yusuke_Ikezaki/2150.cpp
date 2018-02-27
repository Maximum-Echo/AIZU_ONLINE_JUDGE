#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_N=101000;
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

int is_prime(int n,int p)
{
  vector<int> primeplus;
  vector<int> array;
  int l=0;
  for(int i=n+1;l<=30;i++)
    if(prime[i]){
      array.push_back(i); l++;
    }
  for(int i=0,k=0;k<=250;i++)
    for(int j=0;j<=i;j++){
      primeplus.push_back(array[i]+array[j]); k++;
    }
  sort(primeplus.begin(),primeplus.end());

  return primeplus[p-1];
}

int main()
{
  int n,p;
  sieve(); 
  for(;;){
    cin>>n>>p;
    if(n==-1&&p==-1) break;
    
    cout<<is_prime(n,p)<<endl;
  }
}

