#include <iostream>
#include <set>
#include <cmath>
using namespace std;

const int m=256;

int main()
{
  int n,s,a,c,I[256],anss,ansa,ansc;

  for(;;){
    cin>>n;
    if(!n) break;
    for(int i=1;i<=n;i++)
      cin>>I[i];
    int max=n;
    double min=100000.0;
    for(s=0;s<=15;s++)
      for(a=0;a<=15;a++)
	for(c=0;c<=15;c++){
	  int o,r=s,cou=0,x[256]={0};
	  for(int i=1;i<=n;i++){
	    r=(a*r+c)%m; o=(I[i]+r)%m;
	    cou+=x[o]==0;
	    if(max<cou) break;
	    x[o]++;
	  }
	  if(cou<=max){
	    max=cou;
	    double h=0;
	    for(int i=0;i<m;i++)
	      if(x[i]) h-=(double)x[i]/n*log((double)x[i]/n);
	    if(h+1e-9<min){
	      min=h; anss=s; ansa=a; ansc=c;
	    }
	  }
	}
    cout<<anss<<" "<<ansa<<" "<<ansc<<endl;
  }
}
