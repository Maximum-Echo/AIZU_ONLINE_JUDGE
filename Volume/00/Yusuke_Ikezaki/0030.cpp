#include <iostream>
using namespace std;

int s,ans;

void find(int sum,int integer,int n){
  for(int i=integer;i<=9;i++){
    if(sum+i==s&&n==1) ans++;
    else if(sum+i<s&&n-1>0) find(sum+i,i+1,n-1);
  }
}

int main()
{
  int n,sum,integer;
  for(;;){
    sum=0,integer=0,ans=0;
    cin>>n>>s;
    if(!(n|s)) break;
    find(sum,integer,n);
    cout<<ans<<endl;
  }
}
