#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int n,m,minv,maxv;
  vector<int> r;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    r.push_back(m);
  }
  minv=r[0];
  maxv=-1000000000;
  for(int i=1;i<n;i++){
    maxv=max(maxv,r[i]-minv);
    minv=min(minv,r[i]);
  }
  cout<<maxv<<endl;
}
