#include <iostream>
using namespace std;

int jud=2,ans=0;
int grid[52][52]={0};
void search(int w, int h)
{
  if(grid[w][h]==2){
    ans++; grid[w][h]=0;
    if(grid[w][h-1]) search(w,h-1);
    if(grid[w-1][h]) search(w-1,h);
    if(grid[w][h+1]) search(w,h+1);
    if(grid[w+1][h]) search(w+1,h);
  } else if(grid[w][h]==1){
    if(jud==2) jud=1;
    else if(jud==-1){
      jud=0;
    }
  } else if(grid[w][h]==-1){
    if(jud==2) jud=-1;
    else if(jud==1){
      jud=0;
    }
  }
}

int main()
{
  int w,h,i,j;
  char c;

  for(;;){
    cin>>w>>h;
    if(!(w|h)) break;

    for(i=0;i<h+2;i++)
      for(j=0;j<w+2;j++)
	grid[j][i]=0;
    for(i=1;i<h+1;i++)
      for(j=1;j<w+1;j++){
	cin>>c;
	if(c=='.') grid[j][i]=2;
	if(c=='B') grid[j][i]=1;
	if(c=='W') grid[j][i]=-1;
      }
    int ansB=0,ansW=0;
    for(i=1;i<h+1;i++)
      for(j=1;j<w+1;j++){
	if(grid[j][i]==2){
	  search(j,i);
	  if(jud==1) ansB+=ans;
	  else if(jud==-1) ansW+=ans;
	}
	jud=2; ans=0;
      }
    cout<<ansB<<" "<<ansW<<endl;
  }
}
