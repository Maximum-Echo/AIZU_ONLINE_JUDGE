#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct era{
  long long int western;
  long long int based;
  string name;
};

int main()
{
  for(;;){
    struct era data[1000];
    int n,q;
    long long int year;
    struct era *e;
    e=data;
    cin>>n>>q;
    if(!(n|q)) break;
    for(int i=0;i<n;i++)
      cin>>(e+i)->name>>(e+i)->based>>(e+i)->western;
    for(int i=0;i<n-1;i++)
      for(int j=0;j<n-1;j++)
	if((e+j)->western>(e+j+1)->western){
	  int tmp1=(e+j)->western;
	  (e+j)->western=(e+j+1)->western;
	  (e+j+1)->western=tmp1;
	  int tmp2=(e+j)->based;
	  (e+j)->based=(e+j+1)->based;
	  (e+j+1)->based=tmp2;
	  string tmp3=(e+j)->name;
	  (e+j)->name=(e+j+1)->name;
	  (e+j+1)->name=tmp3;
	}
    for(int i=0;i<q;i++){
      int jud=0;
      cin>>year;
      for(int j=0;j<n;j++){
	if((e+j)->western-(e+j)->based+1<=year&&year<=(e+j)->western){
	  jud=1;
	  cout<<(e+j)->name<<" "<<year-(e+j)->western+(e+j)->based<<endl;
	}
      }
      if(!jud) cout<<"Unknown"<<endl;
    }
  }
}
