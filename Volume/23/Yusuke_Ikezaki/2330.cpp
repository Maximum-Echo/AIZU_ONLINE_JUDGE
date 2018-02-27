#include <iostream>
using namespace std;

int main()
{
  long long int n;
  int sum=0;

  cin>>n;
  for(long long int a=1;n>a;a*=3)
    if(n>a) sum++;
  cout<<sum<<endl;
}
