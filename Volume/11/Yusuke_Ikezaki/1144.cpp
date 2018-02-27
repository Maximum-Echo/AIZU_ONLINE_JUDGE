#include <iostream>
using namespace std;

int w,h,map[20][20],ans;
int dx[]={0,1,0,-1}; int dy[]={-1,0,1,0};

void solve(int nx,int ny,int sum){
  if(sum>=ans) return;
  for(int i=0;i<4;i++){
    int x=nx,y=ny;
    x+=dx[i]; y+=dy[i];
    if(x<0||x>=w||y<0||y>=h||map[y][x]==1) continue;
    for(;;){
      if(map[y][x]==3){
	ans=sum; return;
      }
      x+=dx[i]; y+=dy[i];
      if(x<0||x>=w||y<0||y>=h) break;
      if(map[y][x]==1){
	map[y][x]=0;
	solve(x-dx[i],y-dy[i],sum+1);
	map[y][x]=1;
	break;
      }
    }
  }
}

int main(){
  int sx,sy;  
  for(;;){
    cin>>w>>h;
    if(w==0&&h==0) break;
    ans=11;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++){
	cin>>map[i][j];
	if(map[i][j]==2){
	  sx=j; sy=i;
	}
      }
    solve(sx,sy,1);
    if(ans>10) ans=-1;
    cout<<ans<<endl;
  }
}
