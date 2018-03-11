<<<<<<< HEAD
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int i,j,len,ang,b,a[20];
  string dir;

  for(;;){
    cin>>dir;
    if(dir[0]=='#') break;

    len=dir.size(); ang=0;
    if(dir[len-1]=='h'){
      a[0]=0; len-=5;
    } else {
      a[0]=90; len-=4;
    }
    if(!len){
      cout<<a[0]<<endl; continue;
    }
    for(i=len-1,j=0;i>0;j++){
      if(dir[i]=='h'){
	a[j+1]=-90;
	i-=5;
      } else if(dir[i]=='t'){
	a[j+1]=90;
	i-=4;
      }
    }
    b=pow(2,j);
    for(i=0;i<j;i++){
      a[i]*=pow(2,j-i);
      ang+=a[i];
    }
    ang+=a[j];
    for(;;){
      if(ang%b==0){
	cout<<ang/b<<endl; break;
      } else{
	if(ang%2==0&&b%2==0){
	  ang/=2; b/=2;
	} else {
	  cout<<ang<<"/"<<b<<endl; break;
	}
      }
    }
  }
}
=======
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int i,j,len,ang,b,a[20];
  string dir;

  for(;;){
    cin>>dir;
    if(dir[0]=='#') break;

    len=dir.size(); ang=0;
    if(dir[len-1]=='h'){
      a[0]=0; len-=5;
    } else {
      a[0]=90; len-=4;
    }
    if(!len){
      cout<<a[0]<<endl; continue;
    }
    for(i=len-1,j=0;i>0;j++){
      if(dir[i]=='h'){
	a[j+1]=-90;
	i-=5;
      } else if(dir[i]=='t'){
	a[j+1]=90;
	i-=4;
      }
    }
    b=pow(2,j);
    for(i=0;i<j;i++){
      a[i]*=pow(2,j-i);
      ang+=a[i];
    }
    ang+=a[j];
    for(;;){
      if(ang%b==0){
	cout<<ang/b<<endl; break;
      } else{
	if(ang%2==0&&b%2==0){
	  ang/=2; b/=2;
	} else {
	  cout<<ang<<"/"<<b<<endl; break;
	}
      }
    }
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
