<<<<<<< HEAD
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int n,i,j;
  int p[50],a[50],b[50],c[50],d[50],e[50],f[50],s[50],m[50],in[50],time[50];
  string l[50],tmps;
  double eff[50],tmp;

  for(;;){
    cin>>n;
    if(!n) break;

    for(i=0;i<n;i++){
      cin>>l[i]>>p[i]>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i]>>s[i]>>m[i];
      in[i]=(f[i]*s[i])*m[i]-p[i]; 
      time[i]=a[i]+b[i]+c[i]+m[i]*(d[i]+e[i]);
      eff[i]=(double)in[i]/time[i];
    }
    for(i=0;i<n;i++){
      for(j=1;j<n;j++){
	if(eff[j-1]<eff[j]){
	  tmp=eff[j-1]; eff[j-1]=eff[j]; eff[j]=tmp;
	  l[j-1].swap(l[j]);
	} else if(eff[j-1]==eff[j]){
	  if(l[j-1].compare(l[j])>0)
	    l[j-1].swap(l[j]);
	}
      }
    }
    for(i=0;i<n;i++)
      cout<<l[i]<<endl;
    cout<<"#"<<endl;
  }
}
=======
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int n,i,j;
  int p[50],a[50],b[50],c[50],d[50],e[50],f[50],s[50],m[50],in[50],time[50];
  string l[50],tmps;
  double eff[50],tmp;

  for(;;){
    cin>>n;
    if(!n) break;

    for(i=0;i<n;i++){
      cin>>l[i]>>p[i]>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i]>>s[i]>>m[i];
      in[i]=(f[i]*s[i])*m[i]-p[i]; 
      time[i]=a[i]+b[i]+c[i]+m[i]*(d[i]+e[i]);
      eff[i]=(double)in[i]/time[i];
    }
    for(i=0;i<n;i++){
      for(j=1;j<n;j++){
	if(eff[j-1]<eff[j]){
	  tmp=eff[j-1]; eff[j-1]=eff[j]; eff[j]=tmp;
	  l[j-1].swap(l[j]);
	} else if(eff[j-1]==eff[j]){
	  if(l[j-1].compare(l[j])>0)
	    l[j-1].swap(l[j]);
	}
      }
    }
    for(i=0;i<n;i++)
      cout<<l[i]<<endl;
    cout<<"#"<<endl;
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
