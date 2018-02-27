#include <iostream>
using namespace std;

int unit_num(int p,int q,int a,int n,int bound){
  if(p==0) return 1;
  else if(n<=0) return 0;
  int sum=0;
  for(;bound<=a;bound++)
    if(q<=p*bound) sum+=unit_num(p*bound-q,q*bound,a/bound,n-1,bound);
  return sum;
}

int main(){
  int p,q,a,n;
  for(;;){
    cin>>p>>q>>a>>n;
    if(n==0) break;
    cout<<unit_num(p,q,a,n,1)<<endl;
  }
}
