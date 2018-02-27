#include <iostream>
using namespace std;

int main(void)
{
  int dice1[6],dice2[6],cnt=0;
  for(int i=0;i<6;i++) cin>>dice1[i];
  for(int i=0;i<6;i++) cin>>dice2[i];
  for(int i=0;i<6;){
    if(dice1[i]==dice2[i]) i++;
    else{
      for(int j=i+1;j<6;j++)
	if(dice1[i]==dice2[j]){
	  int tmp=dice1[i];
	  dice1[i]=dice1[j];
	  dice1[j]=tmp;
	  cnt+=2*(j-i)+1; break;
	}
    }
  }
  //cout<<cnt<<endl;
  if(cnt%2==0) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
