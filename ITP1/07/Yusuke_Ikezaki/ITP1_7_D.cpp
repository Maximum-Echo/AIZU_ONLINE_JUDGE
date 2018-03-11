#include <iostream>
using namespace std;

int main()
{
  int n,m,l,i,j,k,mat1[100][100],mat2[100][100];
  long long int ans[100][100]={0};

  cin>>n>>m>>l;
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      cin>>mat1[i][j];
  for(i=0;i<m;i++)
    for(j=0;j<l;j++)
      cin>>mat2[i][j];
  for(i=0;i<n;i++)
    for(j=0;j<l;j++)
      for(k=0;k<m;k++){
	ans[i][j]+=mat1[i][k]*mat2[k][j];
      }
  for(i=0;i<n;i++)
    for(j=0;j<l;j++){
      if(j<l-1) cout<<ans[i][j]<<" ";
      if(j==l-1) cout<<ans[i][j]<<endl;
  }
}
