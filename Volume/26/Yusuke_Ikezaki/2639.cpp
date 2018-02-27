#include <iostream>
using namespace std;

int main()
{
  int a,b,c,sleep[10000]={0};

  cin>>a>>b>>c;
  if(a+b==60&&a<c){
    cout<<"-1"<<endl; return 0;
  }
  for(int i=0;i<9000;i+=(a+b))
    for(int j=i;j<=(i+a);j++)
      sleep[j]=1;
  for(int i=c;i<10000;i+=60)
    if(sleep[i]){
      cout<<i<<endl; return 0;
    }
  cout<<"-1"<<endl;
}
