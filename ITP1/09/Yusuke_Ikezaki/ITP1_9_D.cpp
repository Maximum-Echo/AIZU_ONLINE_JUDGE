#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int q,i,j,beg,end;
  string str,com,p;
  char tmp;

  cin>>str;
  cin>>q;
  for(i=0;i<q;i++){
    cin>>com>>beg>>end;
    if(com=="replace"){
      cin>>p;
      str.replace(str.begin()+beg,str.begin()+end+1,p);
    } else if(com=="reverse"){
      reverse(str.begin()+beg,str.begin()+end+1);
    } else if(com=="print"){
      cout<<str.substr(beg,end-beg+1)<<endl;
    }
  }
}
