#include <iostream>
using namespace std;

int main()
{
  int N,W,H,x,y,w,sumx=0,sumy=0;
  int kotox[100000],kotoy[100000];

  cin>>N>>W>>H;
  for(int i=0;i<N;i++){
    cin>>x>>y>>w;
    for(int j=x-w;j<x+w;j++){
      if(j<0) j=0;
      else if(j>=W) break;
      if(kotox[j]!=1){
	kotox[j]=1; sumx++;
      }
      if(sumx==W){
	cout<<"Yes"<<endl; return 0;
      }
    }
    for(int k=y-w;k<y+w;k++){
      if(k<0) k=0;
      else if(k>=H) break;
      if(kotoy[k]!=1){
	kotoy[k]=1; sumy++;
      }
      if(sumy==H){
	cout<<"Yes"<<endl; return 0;
      }
    }
  }
  cout<<"No"<<endl;
}
