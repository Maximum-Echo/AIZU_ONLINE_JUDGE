#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int max=-1;
  for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++){
      int k=a[i]*a[j];
      if(k>max){
	int digit=k%10;
	int dummy=k/10;
	while(dummy>0){
	  if(digit-1==dummy%10) digit=dummy%10;
	  else break;
	  dummy/=10;
	}
	if(dummy==0) max=k;
      }
    }
  
  cout<<max<<endl;
}
