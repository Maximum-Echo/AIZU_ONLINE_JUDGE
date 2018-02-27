//use minimum heap
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;

int n,p[100000],S[100000];
vector<pii> pm;

void dice(){
  vector<pii> dummy=pm;
  for(int k=0;k<n-1;k++){
    sort(dummy.begin(),dummy.end());
    int i=dummy[0].second;
    if(p[i]!=0) continue;
    S[i]=i;
    for(int j=1;j<=6;j++){
      int now=i+j;
      if(now>=n-1){
	if(pm[i].first+1<pm[n-1].first) pm[n-1].first=pm[i].first+1;
	break;
      }
      bool loop=false;
      for(;p[now]!=0;){
	if(S[now]==i){
	  loop=true; break;
	}
	S[now]=i;
	now+=p[now];
      }
      if(loop) continue;
      if(pm[i].first+1<pm[now].first) pm[now].first=pm[i].first+1;
    }
  }
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    int pms,pmf;
    cin>>p[i];
    pmf=S[i]=100000;
    pm.push_back(make_pair(pmf,i));
  }
  pm[0].first=0;
  dice();
  cout<<pm[n-1].first<<endl;
  for(int i=0;i<n;i++)
    cout<<S[i]<<" "<<p[i]<<" "<<pm[i].first<<endl;
}
