#include <iostream>
using namespace std;

int main(){
  int n;
  for(;;){
    cin>>n;
    if(!n) break;
    cin>>exp;
    if(exp=="+") cout<<add(n,1)<<endl;
    else if(exp=="*") cout<<multiple(n,1)<<endl;
    else cout<<exp<<endl;
  }
}
