#include <iostream>
using namespace std;

int main()
{
  int n,a[10000],i,min=10000000,max=-10000000;
  long int sum=0;

  cin>>n;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    if(a[i]<min) min=a[i];
    if(a[i]>max) max=a[i];
    sum+=a[i];
  }
  cout<<min<<" "<<max<<" "<<sum<<endl;
}
