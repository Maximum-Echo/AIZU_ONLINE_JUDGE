<<<<<<< HEAD
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int m,k;
int bill[100000];

void probability(int n,int sum)
{
  for(int i=1;i<=m;i++){
    if(n==1){
      int def=sum+i-k;
      if(def>0) bill[def]++;
      else bill[1]++;
    } else probability(n-1,sum+i);
  }
}

int main()
{
  int n;

  for(;;){
    cin>>n>>m>>k;
    if(!(n|m|k)) break;
    for(int i=0;i<=n*m-k;i++) bill[i]=0;
    probability(n,0);
    double sum=0;
    for(int i=1;i<=n*m-k;i++)
      sum+=bill[i]/pow(m,n)*i;
    printf("%.9f\n", sum);
  }
}
=======
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int m,k;
int bill[100000];

void probability(int n,int sum)
{
  for(int i=1;i<=m;i++){
    if(n==1){
      int def=sum+i-k;
      if(def>0) bill[def]++;
      else bill[1]++;
    } else probability(n-1,sum+i);
  }
}

int main()
{
  int n;

  for(;;){
    cin>>n>>m>>k;
    if(!(n|m|k)) break;
    for(int i=0;i<=n*m-k;i++) bill[i]=0;
    probability(n,0);
    double sum=0;
    for(int i=1;i<=n*m-k;i++)
      sum+=bill[i]/pow(m,n)*i;
    printf("%.9f\n", sum);
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
