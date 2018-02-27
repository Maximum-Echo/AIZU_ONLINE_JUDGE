#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int, pair<int, string> > era;

int main()
{
  int n,q,year,based,western;
  string name;
  vector<piis> era;
  for(;;){
    cin>>n>>q;
    if(!(n|q)) break;
    for(int i=0;i<n;i++){
      cin>>name>>based>>western;
      era.push_back(piis(western,based,name));
    }
    sort(era.begin(),era.end());
    for(int i=0;i<q;i++){
      cin>>year;
      if(year<era[0].first){
	int jud=0;
	for(int j=0;j<era[0].second.first;j++)
	  if(era[0].first-j==year){
	    cout<<era[0].second.second<<" "<<era[0].second.first-j<<endl;
	    jud=1; break;
	  }
	if(!jud) cout<<"Unknown"<<endl;
	continue;
      } else if(era[n-1].first<year){
	cout<<"Unknown"<<endl; continue;
      }
      int jud=0;
      for(int j=0;j<n-1;j++){
	if(era[j].first<=year&&year<=era[j+1].first){
	  for(int k=0;k<era[j+1].second.first;k++)
	    if(era[j+1].first-k==year){
	      cout<<era[j+1].second.second<<" "<<era[j+1].second.first-k<<endl;
	      jud=1; break;
	    }
	  if(!jud) cout<<"Unknown"<<endl;
	}
	if(jud) break;
      }
    }
  }
}
