#include <iostream>
using namespace std;

const int MAX=300000;
bool num[MAX];

void sieve()
{
  int j;
  for(int i=0;i<MAX;i++)
    num[i]=false;
  for(int i=6;i<MAX;i++)
    if(i%7==1||i%7==6) num[i]=true;
  for(int i=6;i<MAX;i++){
    if(num[i])
      for(j=2;j*j<=i;j++)
	if(num[j]&&!(i%j)){
	  num[i]=false; break;
	}
  }
}

int main()
{
  sieve();
  int n;
  for(;;){
    cin>>n;
    if(n==1) break;
    cout<<n<<":";
    for(int i=6;i<=n/6;i++)
      if(num[i]&&!(n%i)) cout<<" "<<i;
    if(num[n]) cout<<" "<<n;
    cout<<endl;
  }
}
