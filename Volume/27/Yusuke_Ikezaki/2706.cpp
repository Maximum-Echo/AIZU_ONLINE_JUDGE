#include <iostream>
using namespace std;

int gcd(int p,int q){
  int r=q%p;
  while(r>0){
    q=p;
    p=r;
    r=q%p;
  }
  return p;
}

int divide(int b,int i){
  while(b%(i*i)==0){
    b/=i;
  }
  return b;
}

int main(){
  int p,q;
  cin>>p>>q;
  int b=q/gcd(p,q);
  for(int i=2;i*i<=b;i++)
    b=divide(b,i);
  cout<<b<<endl;
}
