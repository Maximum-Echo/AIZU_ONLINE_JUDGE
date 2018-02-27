#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,d;
  int f[50];
  while(cin>>n,n){
    vector<int> day[30];
    for(int i=0;i<n;i++){
      cin>>f[i];
      for(int j=0;j<f[i];j++){
	cin>>d;
	day[d-1].push_back(i);
      }
    }
    bool gather=false;
    set<int> a; set<int> b[n];
    for(int i=0;i<n;i++) b[i].insert(i);
    for(int i=0;i<30;i++){
      for(int j=0;j<day[i].size();j++)
	set_union(a.begin(),a.end(),b[day[i][j]].begin(),b[day[i][j]].end(),
		  inserter(a,a.end()));
      if(a.size()==n){
	cout<<i+1<<endl; gather=true; break;
      }
      for(int j=0;j<day[i].size();j++) b[day[i][j]]=a;
      a.clear();
    }
    if(!gather) cout<<-1<<endl;
  }
}
