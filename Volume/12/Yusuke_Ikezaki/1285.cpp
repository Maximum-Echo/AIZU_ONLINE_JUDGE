<<<<<<< HEAD
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int n,w,v,sum;

  for(;;){
    cin>>n>>w;
    if(!(n|w)) break;
    int mark=0,sum[100]={0};
    for(int i=0;i<n;i++){
      cin>>v;
      sum[v/w]++;
      if((v/w)>mark) mark=(v/w);
    }
    int max=0;
    double ans=0;
    for(int i=0;i<=mark;i++)
      if(sum[i]>max) max=sum[i];
    for(int i=0;i<n;i++)
      ans+=((double)(mark-i)/mark)*((double)sum[i]/max);
    printf("%.7f\n", ans+0.01);
  }
}
=======
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int n,w,v,sum;

  for(;;){
    cin>>n>>w;
    if(!(n|w)) break;
    int mark=0,sum[100]={0};
    for(int i=0;i<n;i++){
      cin>>v;
      sum[v/w]++;
      if((v/w)>mark) mark=(v/w);
    }
    int max=0;
    double ans=0;
    for(int i=0;i<=mark;i++)
      if(sum[i]>max) max=sum[i];
    for(int i=0;i<n;i++)
      ans+=((double)(mark-i)/mark)*((double)sum[i]/max);
    printf("%.7f\n", ans+0.01);
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
