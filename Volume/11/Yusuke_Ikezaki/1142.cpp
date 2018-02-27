#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
  int m,i,j,k,l,p,len,ans,jud;

  cin>>m;
  for(i=0;i<m;i++){
    string tra;
    cin>>tra;
    len=tra.size();
    ans=0;
    string res[10000];
    for(j=1;j<len;j++){
      string sto1,sto2;
      for(p=0;p<8;p++){
	string dep1,dep2;
	if(p>=0&&p<2){
	  sto1.assign(tra,0,j);
	  sto2.assign(tra,j,len-j);
	} else if(p>=2&&p<4){
	  sto1.assign(tra,0,j);
	  sto2.assign(tra,j,len-j);
	  reverse(sto1.begin(),sto1.end());
	} else if(p>=4&&p<6){
	  sto1.assign(tra,0,j);
	  sto2.assign(tra,j,len-j);
	  reverse(sto2.begin(),sto2.end());
	} else {
	  sto1.assign(tra,0,j);
	  sto2.assign(tra,j,len-j);
	  reverse(sto1.begin(),sto1.end());
	  reverse(sto2.begin(),sto2.end());
	}
	dep1.assign(sto1,0,j); dep1+=sto2;
	dep2.assign(sto2,0,len-j); dep2+=sto1;
	res[2*(j-1)*8+2*p].assign(dep1,0,len); 
	res[2*(j-1)*8+2*p+1].assign(dep2,0,len);
	if(j==1&&p==0){
	  if(res[0]==res[1]) ans=1;
	  if(res[0]!=res[1]) ans=2;
	} else {
	  for(l=0,jud=0;l<2*(j-1)*8+2*p;l++){
	    if(dep1==res[l]){
	      jud=0; break;
	    } else {
	      jud=1;
	    }
	  }
	  if(jud) ans++;
	  for(l=0,jud=0;l<2*(j-1)*8+2*p+1;l++){
	    if(dep2==res[l]){
	      jud=0; break;
	    } else {
	      jud=1;
	    }
	  }
	  if(jud) ans++;
	}
      }
    }
    cout<<ans<<endl;
  }
}

