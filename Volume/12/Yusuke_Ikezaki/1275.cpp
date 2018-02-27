#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n,k,m;
  for(;;){
    cin>>n>>k>>m;
    if(!(n|k|m)) break;
    vector<int> stone;
    for(int i=1;i<=n;i++)
      stone.push_back(i);
    for(int i=m-1,cou=k;stone.size()>1;cou++){
      if(cou<k){
	if(i==stone.size()-1) i=0;
	else i++;
	continue;
      }
      if(i==stone.size()-1){
	stone.erase(stone.begin()+i);
	i=0;
      } else stone.erase(stone.begin()+i);
      cou=0;
    }
    cout<<stone[0]<<endl;
  }
}
