#include <iostream>
using namespace std;

#define NUM 1000000

int n,tetra_sum[NUM],odd_sum[NUM];

void tetrahedral(int sum[],int tetra)
{
  for(int i=tetra;i<NUM;i++)
    sum[i]=min(sum[i],sum[i-tetra]+1);
}

int main()
{
  tetra_sum[0]=0; odd_sum[0]=0;
  for(int i=1;i<NUM;i++){
    tetra_sum[i]=NUM; odd_sum[i]=NUM;
  }
  for(int i=1;i<=180;i++){
    int tetra=i*(i+1)*(i+2)/6;
    tetrahedral(tetra_sum,tetra);
    if(tetra%2) tetrahedral(odd_sum,tetra);
  }
  for(;;){
    cin>>n;
    if(!n) break;
    cout<<tetra_sum[n]<<" "<<odd_sum[n]<<endl;
  }
}
