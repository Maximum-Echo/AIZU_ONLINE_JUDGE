#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
  int n,i,vec1[100],vec2[100];
  double sum1=0,sum2=0,sum3=0,max=0;

  cin>>n;
  for(i=0;i<n;i++)
    cin>>vec1[i];
  for(i=0;i<n;i++)
    cin>>vec2[i];
  for(i=0;i<n;i++){
    sum1+=abs(vec1[i]-vec2[i]);
    if(abs(vec1[i]-vec2[i])>max) max=abs(vec1[i]-vec2[i]);
    sum2+=abs(vec1[i]-vec2[i])*abs(vec1[i]-vec2[i]);
    sum3+=abs(vec1[i]-vec2[i])*abs(vec1[i]-vec2[i])*abs(vec1[i]-vec2[i]);
  }
  printf("%f\n", sum1);
  printf("%f\n", sqrt(sum2));
  printf("%f\n", pow(sum3,1.0/3));
  printf("%f\n", max);
}
