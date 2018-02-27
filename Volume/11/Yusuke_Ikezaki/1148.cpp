#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int N,M,r,q,t[1000],n[1000],m[1000],s[1000],ts,te,stu,sum,log,res;

  for(;;){
    cin>>N>>M;
    if(!(N|M)) break;
    cin>>r;
    for(int i=0;i<r;i++)
      cin>>t[i]>>n[i]>>m[i]>>s[i];
    cin>>q;
    for(int i=0;i<q;i++){
      cin>>ts>>te>>stu;
      sum=0; log=0;
      for(int j=0;j<r;j++){
	if(m[j]!=stu) continue;
	if(s[j]){
	  log++;
	  if(log==1) res=t[j];
	} else {
	  log--;
	  if(!log&&ts<=t[j]&&res<=te) sum+=(min(te,t[j])-max(ts,res));
	}
      }
      cout<<sum<<endl;
    }
  }
}
