#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
  int i,jud=0;
  string s,p;

  cin>>s>>p;
  for(i=0;i<s.length();i++){
    if(s.find(p)>=0&&s.find(p)<s.length()){
      cout<<"Yes"<<endl; jud=1; break;
    }
    rotate(s.begin(),s.begin()+1,s.end());
  }
  if(!jud) cout<<"No"<<endl;
}
  
