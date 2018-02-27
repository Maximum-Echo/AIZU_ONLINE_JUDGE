<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct cake{
  int w,d;
};

struct cake c[101];

void change(int n,int p,int s,int w,int d,bool wj){
  for(int i=p;i<n-1;i++) c[i]=c[i+1];
  if(wj){
    if(s<=w-s){
      c[n-1].w=s; c[n].w=w-s;
    } else{
      c[n-1].w=w-s; c[n].w=s;
    }
    c[n-1].d=c[n].d=d;
  } else{
    if(s<=d-s){
      c[n-1].d=s; c[n].d=d-s;
    } else{
      c[n-1].d=d-s; c[n].d=s;
    }
    c[n-1].w=c[n].w=w;
  }
}

void cut(int p,int s,int n){
  int w=c[p].w,d=c[p].d;
  s%=2*w+2*d;
  if(s<w){
    change(n,p,s,w,d,true);
  } else if(s<w+d){
    s-=w;
    change(n,p,s,w,d,false);
  } else if(s<2*w+d){
    s-=w+d;
    change(n,p,s,w,d,true);
  } else{
    s-=2*w+d;
    change(n,p,s,w,d,false);
  }
}

int main(){
  int n,w,d,p,s;

  for(;;){
    cin>>n>>w>>d;
    if(n==0&&w==0&&d==0) break;
    c[0].w=w; c[0].d=d;
    for(int i=0;i<n;i++){
      cin>>p>>s;
      cut(p-1,s,i+1);
    }
    vector<int> area;
    for(int i=0;i<=n;i++) area.push_back(c[i].w*c[i].d);
    sort(area.begin(),area.end());
    for(int i=0;i<n;i++) cout<<area[i]<<" ";
    cout<<area[n]<<endl;
  }
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct cake{
  int w,d;
};

struct cake c[101];

void change(int n,int p,int s,int w,int d,bool wj){
  for(int i=p;i<n-1;i++) c[i]=c[i+1];
  if(wj){
    if(s<=w-s){
      c[n-1].w=s; c[n].w=w-s;
    } else{
      c[n-1].w=w-s; c[n].w=s;
    }
    c[n-1].d=c[n].d=d;
  } else{
    if(s<=d-s){
      c[n-1].d=s; c[n].d=d-s;
    } else{
      c[n-1].d=d-s; c[n].d=s;
    }
    c[n-1].w=c[n].w=w;
  }
}

void cut(int p,int s,int n){
  int w=c[p].w,d=c[p].d;
  s%=2*w+2*d;
  if(s<w){
    change(n,p,s,w,d,true);
  } else if(s<w+d){
    s-=w;
    change(n,p,s,w,d,false);
  } else if(s<2*w+d){
    s-=w+d;
    change(n,p,s,w,d,true);
  } else{
    s-=2*w+d;
    change(n,p,s,w,d,false);
  }
}

int main(){
  int n,w,d,p,s;

  for(;;){
    cin>>n>>w>>d;
    if(n==0&&w==0&&d==0) break;
    c[0].w=w; c[0].d=d;
    for(int i=0;i<n;i++){
      cin>>p>>s;
      cut(p-1,s,i+1);
    }
    vector<int> area;
    for(int i=0;i<=n;i++) area.push_back(c[i].w*c[i].d);
    sort(area.begin(),area.end());
    for(int i=0;i<n;i++) cout<<area[i]<<" ";
    cout<<area[n]<<endl;
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
