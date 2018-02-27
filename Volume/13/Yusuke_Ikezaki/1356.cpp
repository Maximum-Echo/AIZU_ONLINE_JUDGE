<<<<<<< HEAD
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string i2s(int num){
  stringstream ss;
  ss<<num;
  return ss.str();
}

int main(){
  int n;
  char c;
  string s="";
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>c;
    s+=c;
  }
  for(int value=0,digit=i2s(value).size();;value++,digit=i2s(value).size()){
    bool find=false;
    for(int i=0;i<n-digit+1;i++){
      if(s.substr(i,digit)==i2s(value)){
	find=true; break;
      }
    }
    if(!find){
      cout<<value<<endl; break;
    }
  }
}
=======
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string i2s(int num){
  stringstream ss;
  ss<<num;
  return ss.str();
}

int main(){
  int n;
  char c;
  string s="";
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>c;
    s+=c;
  }
  for(int value=0,digit=i2s(value).size();;value++,digit=i2s(value).size()){
    bool find=false;
    for(int i=0;i<n-digit+1;i++){
      if(s.substr(i,digit)==i2s(value)){
	find=true; break;
      }
    }
    if(!find){
      cout<<value<<endl; break;
    }
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
