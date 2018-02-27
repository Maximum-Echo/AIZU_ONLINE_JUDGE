#include <iostream>
using namespace std;

int tile[22][22];
int sum;

void search(int w,int h)
{
  if(tile[w][h]){
    tile[w][h]=0; sum++;
    search(w,h-1);
    search(w-1,h);
    search(w+1,h);
    search(w,h+1);
  }
}

int main()
{
  int w,h,i,j,sx,sy;
  char c;
  
  for(;;){
    cin>>w>>h;
    if(!(w|h)) break;

    sum=0;
    for(i=0;i<22;i++)
      for(j=0;j<22;j++)
	tile[i][j]=0;
    for(i=1;i<h+1;i++){
      for(j=1;j<w+1;j++){
	cin>>c;
	if(c=='#') tile[j][i]=0;
	else if(c=='.') tile[j][i]=1;
	else if(c=='@'){
	  tile[j][i]=1; sx=j; sy=i;
	}
      }
    }
    search(sx,sy);
    cout<<sum<<endl;
  }
}
