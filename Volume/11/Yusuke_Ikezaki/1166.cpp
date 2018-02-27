#include <iostream>
#include <queue>
using namespace std;

int w,h,ans;
int map[59][59];
int reached[59][59];
queue<int> nx,ny,cnt;

void search(int cnt,int x,int y){
  if(cnt>=ans||reached[y][x]) return;
  if(x==2*(w-1)&&y==2*(h-1)){
    if(cnt<ans) ans=cnt;
    return;
  }
  reached[y][x]=1;
  if(x<2*(w-1)&&map[y][x+1]==0) search(cnt+1,x+2,y);
  if(y<2*(h-1)&&map[y+1][x]==0) search(cnt+1,x,y+2);
  if(x>0&&map[y][x-1]==0) search(cnt+1,x-2,y);
  if(y>0&&map[y-1][x]==0) search(cnt+1,x,y-2);
  reached[y][x]=0;
}

void v_search(){
  nx.push(0); ny.push(0); cnt.push(1);
  while(!nx.empty()&&!ny.empty()){
    int x=nx.front(); int y=ny.front(); int c=cnt.front();
    nx.pop(); ny.pop(); cnt.pop();
    if(c>=ans||reached[y][x]) continue;
    if(x==2*(w-1)&&y==2*(h-1)&&c<ans){
      ans=c; continue;
    }
    reached[y][x]=1;
    if(x<2*(w-1)&&map[y][x+1]==0&&reached[y][x+1]==0){
      nx.push(x+2); ny.push(y); cnt.push(c+1);
    }
    if(y<2*(h-1)&&map[y+1][x]==0&&reached[y+1][x]==0){
      nx.push(x); ny.push(y+2); cnt.push(c+1);
    }
    if(x>0&&map[y][x-1]==0&&reached[y][x-1]==0){
      nx.push(x-2); ny.push(y); cnt.push(c+1);
    }
    if(y>0&&map[y-1][x]==0&&reached[y-1][x]==0){
      nx.push(x); ny.push(y-2); cnt.push(c+1);
    }
  }
}

int main(){
  while(cin>>w>>h,w){
    for(int i=0;i<h*2-1;i++){
      if(i%2==0){
	for(int j=0;j<w*2-1;j++){
	  if(j%2==0) map[i][j]=reached[i][j]=0;
	  else cin>>map[i][j];
	}
      } else{
	for(int j=0;j<w*2-1;j++){
	  if(j%2==0) cin>>map[i][j];
	  else map[i][j]=reached[i][j]=0;
	}
      }
    }
    /*for(int i=0;i<h*2-1;i++){
      for(int j=0;j<w*2-1;j++)
	cout<<map[i][j]<<" ";
      cout<<endl;
      }*/
    ans=10000;
    v_search();
    if(ans==10000) ans=0;
    cout<<ans<<endl;
  }
}
