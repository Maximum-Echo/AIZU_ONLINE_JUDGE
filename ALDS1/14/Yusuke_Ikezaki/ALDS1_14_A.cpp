#include <iostream>
#include <string>
using namespace std;

int main(){
  string s,find_word;

  cin>>s>>find_word;
  int pos=s.find(find_word,0);
  while(pos!=string::npos){
    cout<<pos<<endl;
    pos=s.find(find_word,++pos);
  }
}
