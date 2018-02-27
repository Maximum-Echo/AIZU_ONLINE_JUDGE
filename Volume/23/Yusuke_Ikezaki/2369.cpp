#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin>>s;
  for(bool cat=true;cat;){
    cat=false;
    for(int i=0;i<s.size();i++){
      if(s.substr(i,3)=="mew") s.erase(i,3);
      else if(s.substr(i,4)=="mcew"||s.substr(i,4)=="mecw") s.erase(i,4);
      else if(s.substr(i,5)=="mcecw") s.erase(i,5);
      else continue;
      s.insert(i,"c"); cat=true;
    }
  }
  cout<<((s=="c")?"Cat":"Rabbit")<<endl;
}
