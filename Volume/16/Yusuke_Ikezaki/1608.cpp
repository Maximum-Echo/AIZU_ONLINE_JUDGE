#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  for(;;){
    int n;
    cin>>n;
    if(n==0) break;
    vector<int> a;
    for(int i=0;i<n;i++){
      int dummy;
      cin>>dummy;
      a.push_back(dummy);
    }

    sort(a.begin(),a.end());

    int min=10000000;
    for(int i=0;i<n-1;i++){
      int diff=a[i+1]-a[i];
      if(diff<min) min=diff;
    }
    cout<<min<<endl;
  }
}
