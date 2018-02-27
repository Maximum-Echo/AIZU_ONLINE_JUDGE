#include <iostream>
#include <stack>

int h,w,c;
int map[8][8],dummy[8][8];

void search(){
  stack<int> sx,sy;
  for(;!sx.empty();){
    int x=sx.pop();
    int y=sy.pop();
    int dirx[]={-1,0,1,0};
    int diry[]={0,-1,0,1};
    for(int i=0;i<3;i++){
    }
  }
}

int main(){
  
  for(;;){
    cin>>h>>w>>c;
    if(h==0&&w==0&&c==0) break;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
	cin>>map[i][j];
    search();
  }
}
