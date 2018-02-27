#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
  int n,a,b;
  int low[100000],up[100000];
  set<int> s,t;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    low[a]++; up[b]++;
    s.insert(a); t.insert(b);
  }
  int sum=n;
  set<int>::iterator i=s.begin(),j=t.begin();
  for(int k=0;k<n;k++){
    if(n<*i) n-=low[*i++];
    else if(*j<n) n-=up[*j++];
  }
  cout<<n<<endl;
}
