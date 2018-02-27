#include <bits/stdc++.h>
using namespace std;

int n,m,ans;
int code[16];
int sig[20000];

int dif_sq(int num1,int num2){
  return (num1-num2)*(num1-num2);
}

void solve(int num,int sum,int dep){
  if(sum>=ans) return;
  if(dep==n&&sum<ans){
    ans=sum; return;
  }
  for(int i=0;i<m;i++){
    int d=num+code[i];
    if(d>255) d=255;
    else if(d<0) d=0;
    solve(d,sum+dif_sq(sig[dep],d),dep+1);
  }
}

int next_sig(int num,int index){
  int d=num+code[index];
  if(d>255) return 255;
  else if(d<0) return 0;
  else return d;
}

void v_solve(){
  stack<int> num,sum,index;
  num.push(128); sum.push(0); index.push(0);
  while(!num.empty()){
    int data=num.top(); int s=sum.top(); int dep=index.top();
    num.pop(); sum.pop(); index.pop();
    if(s>=ans) continue;
    if(dep==n&&s<ans){
      ans=s; continue;
    }
    for(int i=0;i<m;i++){
      int d=next_sig(data,i);
      num.push(d); sum.push(s+dif_sq(sig[dep],d)); index.push(dep+1);
    }
  }
}

int main(){
  while(cin>>n>>m,n){
    for(int i=0;i<m;i++)
      cin>>code[i];
    for(int i=0;i<n;i++)
      cin>>sig[i];
    ans=100000000;
    v_solve();
    cout<<ans<<endl;
  }
}
