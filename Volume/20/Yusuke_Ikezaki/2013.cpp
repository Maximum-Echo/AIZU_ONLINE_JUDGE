<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdio>
using namespace std;

typedef pair<int,int> pii;

int main()
{
  int n,h,m,s;
  for(;;){
    cin>>n;
    if(!n) break;
    vector<pii> time;
    for(int i=0;i<n;i++){
      scanf("%d:%d:%d", &h, &m, &s);
      time.push_back(pii(h*10000+m*100+s,1));
      scanf("%d:%d:%d", &h, &m, &s);
      time.push_back(pii(h*10000+m*100+s,-1));
    }
    sort(time.begin(),time.end());
    int ans=0,res=0;
    for(int i=0;i<time.size();i++){
      res+=time[i].second;
      ans=max(ans,res);
    }
    cout<<ans<<endl;
  }
}
=======
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdio>
using namespace std;

typedef pair<int,int> pii;

int main()
{
  int n,h,m,s;
  for(;;){
    cin>>n;
    if(!n) break;
    vector<pii> time;
    for(int i=0;i<n;i++){
      scanf("%d:%d:%d", &h, &m, &s);
      time.push_back(pii(h*10000+m*100+s,1));
      scanf("%d:%d:%d", &h, &m, &s);
      time.push_back(pii(h*10000+m*100+s,-1));
    }
    sort(time.begin(),time.end());
    int ans=0,res=0;
    for(int i=0;i<time.size();i++){
      res+=time[i].second;
      ans=max(ans,res);
    }
    cout<<ans<<endl;
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
