#include <bits/stdc++.h>
using namespace std;

string table[8];
int dirx[]={0,1,1,1,0,-1,-1,-1};
int diry[]={-1,-1,0,1,1,1,0,-1};
int ans;

void search(int x,int y,int index){
  

void play(){
  for(int turn=0;;turn=++turn%2){
    for(int i=0;i<8;i++)
      for(int j=0;j<8;j++){
	int max=0;
	int maxx[8],maxy[8];
	if(table[i][j]!='.') continue;
	for(int k=0;k<8;k++){
	  ans=0;
	  search(i,j,k);
	  if(ans>max){
	    

int main(){
  for(int i=0;i<8;i++)
    cin>>table[i];
  play();
  for(int i=0;i<8;i++)
    cout<<table[i]<<endl;
}
