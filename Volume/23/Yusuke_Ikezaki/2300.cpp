#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

int n,m;
double dmax=0,l[21],a[21],b[21];
vector<int> vec;

double pows(int i,int j)
{
  return pow(l[i]-l[j],2)+pow(a[i]-a[j],2)+pow(b[i]-b[j],2);
}

void pow_max(int cou,vector<int> vec)
{
  if(cou==n){
    if(vec.size()==m){
      double def=0;
      for(int i=0;i<vec.size();i++)
	for(int j=i+1;j<vec.size();j++)
	  def+=pows(vec[i],vec[j]);
      dmax=max(dmax,def);
    }
  } else {
    pow_max(cou+1,vec); vec.push_back(cou);
    pow_max(cou+1,vec); vec.pop_back();
  }
}

int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++)
    cin>>l[i]>>a[i]>>b[i];
  int cou=0;
  pow_max(cou,vec);    
  printf("%.10f\n", dmax);
}
