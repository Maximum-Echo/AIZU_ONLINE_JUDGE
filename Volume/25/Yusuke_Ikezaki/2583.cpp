#include <iostream>
using namespace std;

void print(int n,string t[],int level[],int sum[]){
  cout<<t[0]<<endl;
  for(int i=1;i<n;i++){
    for(int j=0;j<level[i]-1;j++){
      if(sum[j+1]>0){
	t[i][j]='|';
      } else{
	t[i][j]=' ';
      }
    }
    sum[level[i]]--;
    cout<<t[i]<<endl;
  }
}

int main(){
  int n,level[1000],sum[1000]={0};
  string t[1000];

  for(;;){
    cin>>n;
    if(n==0) break;
    cin>>t[0]; level[0]=0;
    for(int i=1,head=0;i<n;i++){
      cin>>t[i];
      while(t[i][head]!='.') head--;
      t[i][head]='+'; level[i]=++head; sum[head]++;
    }
    print(n,t,level,sum);
  }
}
