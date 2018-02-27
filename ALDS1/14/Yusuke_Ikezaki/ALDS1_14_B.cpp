#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
  string s,find_word;

  cin>>s>>find_word;
  int pos=s.find(find_word,0);
  if(pos!=string::npos) cout<<pos<<endl;
  for(int i=pos+1;i<s.size();i++){
    if(s[i]==find_word[0]){
      pos=s.find(find_word,i);
      if(pos==string::npos) break;
      cout<<pos<<endl;
    } 
  }
}
