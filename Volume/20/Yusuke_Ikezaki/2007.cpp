#include <iostream>
using namespace std;

int main()
{
  int val,hold[4],i,roop;
  int money[4]={10,50,100,500};

  for(roop=0;;roop++){
    cin>>val;
    if(!val) break;
    int sum=-val; int ans[4]={0};
    for(i=0;i<4;i++){
      cin>>hold[i];
      sum+=money[i]*hold[i];
    }
    if(roop) cout<<endl;
    for(i=3;i>=0;i--){
      ans[i]+=sum/money[i];
      sum-=sum/money[i]*money[i];
    }
    for(i=0;i<4;i++)
      if(hold[i]>ans[i]) cout<<money[i]<<" "<<hold[i]-ans[i]<<endl;
  }
} 
