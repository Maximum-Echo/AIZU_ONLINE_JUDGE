#include <iostream>
#include <utility>
#include <queue>
using namespace std;

typedef pair<int,int> pxy;

const int dx[]={0,-1,-1,0,1,1}; const int dy[]={1,0,-1,-1,0,1};

int main()
{
  int t,n,ox,oy,sx,sy,x,y;

  for(;;){
    cin>>t>>n;
    if(!(t|n)) break;
    int map[200][200]={0};
    for(int i=0;i<n;i++){
      cin>>ox>>oy;
      map[ox+100][oy+100]=1;
    }
    cin>>sx>>sy;

    int count=1;
    queue<pxy> q;
    
    q.push(pxy(sx+100,sy+100));
    map[q.front().first][q.front().second]=1;
    while(!q.empty()){
      x=q.front().first; y=q.front().second;
      q.pop();
      for(int i=0;i<6;i++){
	int next_x=x+dx[i],next_y=y+dy[i];
	if(map[next_x][next_y]) continue;
	map[next_x][next_y]=map[x][y]+1;
	count++;
	if(map[x][y]<t)
	  q.push(pxy(next_x,next_y));
      }
    }
    cout<<count<<endl;
  }
}
