<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int n,m,p;
int board[7][7][7];
int height[7][7];
int dx[]={1,0,0,1,1,1,1,0,0,1,1,1,1};
int dy[]={0,1,0,1,-1,0,0,1,1,1,1,-1,-1};
int dz[]={0,0,1,0,0,1,-1,1,-1,1,-1,1,-1};

void init(){
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      height[i][j]=0;
      for(int k=0;k<n;k++)
        board[i][j][k]=0;
    }
}

bool search(int color){
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      for(int k=0;k<n;k++)
        for(int d=0;d<13;d++){
	  int cnt=0;
	  int nx=i; int ny=j; int nz=k;
	  while(nx>=0&&nx<n&&ny>=0&&ny<n&&nz>=0&&nz<n){
            if(board[ny][nx][nz]!=color) break;
	    nx+=dx[d]; ny+=dy[d]; nz+=dz[d];
	    cnt++;
	  }
	  if(cnt>=m) return true;
	}
  return false;
}	

int main(){
  while(cin>>n>>m>>p,n){
    int cnt;
    bool found=false;
    init();
    for(int i=0;i<p;i++){
      int x,y;
      cin>>x>>y;
      if(found) continue;
      int color=(i%2==0)?1:2;
      board[y-1][x-1][height[y-1][x-1]++]=color;
      if(search(color)){
        cnt=i+1; found=true;
      }
    }
    if(found) cout<<((cnt%2==1)?"Black":"White")<<" "<<cnt<<endl;
    else cout<<"Draw"<<endl;
  }
}   
=======
#include <bits/stdc++.h>
using namespace std;

int n,m,p;
int board[7][7][7];
int height[7][7];
int dx[]={1,0,0,1,1,1,1,0,0,1,1,1,1};
int dy[]={0,1,0,1,-1,0,0,1,1,1,1,-1,-1};
int dz[]={0,0,1,0,0,1,-1,1,-1,1,-1,1,-1};

void init(){
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      height[i][j]=0;
      for(int k=0;k<n;k++)
        board[i][j][k]=0;
    }
}

bool search(int color){
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      for(int k=0;k<n;k++)
        for(int d=0;d<13;d++){
	  int cnt=0;
	  int nx=i; int ny=j; int nz=k;
	  while(nx>=0&&nx<n&&ny>=0&&ny<n&&nz>=0&&nz<n){
            if(board[ny][nx][nz]!=color) break;
	    nx+=dx[d]; ny+=dy[d]; nz+=dz[d];
	    cnt++;
	  }
	  if(cnt>=m) return true;
	}
  return false;
}	

int main(){
  while(cin>>n>>m>>p,n){
    int cnt;
    bool found=false;
    init();
    for(int i=0;i<p;i++){
      int x,y;
      cin>>x>>y;
      if(found) continue;
      int color=(i%2==0)?1:2;
      board[y-1][x-1][height[y-1][x-1]++]=color;
      if(search(color)){
        cnt=i+1; found=true;
      }
    }
    if(found) cout<<((cnt%2==1)?"Black":"White")<<" "<<cnt<<endl;
    else cout<<"Draw"<<endl;
  }
}   
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
