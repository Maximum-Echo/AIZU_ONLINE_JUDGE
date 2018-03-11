<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;

int main(){
  int n,m,x,y,sx,sy,lx,ly;
  vector<pii> map;

  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    map.push_back(make_pair(x,y));
  }
  sort(map.begin(),map.end());
  for(int i=0;i<m;i++){
    cin>>sx>>sy>>lx>>ly;
    int left,right;
    for(left=0;map[left].first<sx&&left<map.size();left++);
    int ans=0;
    for(right=left;map[right].first<=lx&&right<map.size();right++)
      if(sy<=map[right].second&&map[right].second<=ly) ans++;
    cout<<ans<<endl;
  }
}
=======
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;

int main(){
  int n,m,x,y,sx,sy,lx,ly;
  vector<pii> map;

  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    map.push_back(make_pair(x,y));
  }
  sort(map.begin(),map.end());
  for(int i=0;i<m;i++){
    cin>>sx>>sy>>lx>>ly;
    int left,right;
    for(left=0;map[left].first<sx&&left<map.size();left++);
    int ans=0;
    for(right=left;map[right].first<=lx&&right<map.size();right++)
      if(sy<=map[right].second&&map[right].second<=ly) ans++;
    cout<<ans<<endl;
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
