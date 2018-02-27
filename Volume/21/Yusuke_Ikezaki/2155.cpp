#include <iostream>
using namespace std;

struct data{
  int t;
  int s;
  int d;
};

int main()
{
  int n,m,tmp,sum;
  struct data tsd[20001];

  for(;;){
    cin>>n>>m;
    if(!(n|m)) break;
    int inf[20001]={0};
    inf[0]=1;
    for(int i=0;i<m;i++)
      cin>>tsd[i].t>>tsd[i].s>>tsd[i].d;
    for(int i=0;i<m-1;i++)
      for(int j=0;j<m-1;j++)
	if(tsd[j].t>tsd[j+1].t){
	  tmp=tsd[j].t; tsd[j].t=tsd[j+1].t; tsd[j+1].t=tmp;
	  tmp=tsd[j].s; tsd[j].s=tsd[j+1].s; tsd[j+1].s=tmp;
	  tmp=tsd[j].d; tsd[j].d=tsd[j+1].d; tsd[j+1].d=tmp;
	}
    sum=1;
    for(int i=0;i<m;i++)
      if(inf[tsd[i].s-1]&&!inf[tsd[i].d-1]){
	inf[tsd[i].d-1]=1; sum++;
      }
    cout<<sum<<endl;
  }
}
