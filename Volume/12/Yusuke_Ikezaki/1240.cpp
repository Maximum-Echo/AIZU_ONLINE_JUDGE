#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string ord,mes;
    cin>>ord>>mes;
    reverse(ord.begin(),ord.end());
    for(int j=0;j<ord.size();j++){
      char c=ord[j];
      
      if(c=='J'){
	rotate(mes.begin(),mes.begin()+mes.size()-1,mes.end());
      }else if(c=='C'){
	rotate(mes.begin(),mes.begin()+1,mes.end());
      }else if(c=='E'){
	string x,y,z;
	for(int k=0;k<mes.size()/2;k++){
	  x.push_back(mes[k]);
	}
	if(mes.size()%2==1) y.push_back(mes[mes.size()/2]);
	for(int k=mes.size()/2+(mes.size()%2?1:0);k<mes.size();k++){
	  z.push_back(mes[k]);
	}
	mes=z+y+x;
      }else if(c=='A'){
	reverse(mes.begin(),mes.end());
      }else if(c=='P'){
	for(int k=0;k<mes.size();k++){
	  if('1'<=mes[k]&&mes[k]<='9') mes[k]-=1;
	  else if(mes[k]=='0') mes[k]='9';
	}
      }else if(c=='M'){
	for(int k=0;k<mes.size();k++){
	  if('0'<=mes[k]&&mes[k]<='8') mes[k]+=1;
	  else if(mes[k]=='9') mes[k]='0';
	}
      }
    }
    cout<<mes<<endl;
  }
}
