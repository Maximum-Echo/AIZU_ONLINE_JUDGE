<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

int main(){
  int m,n;
  for(;;){
    cin>>m>>n;
    if(m==0&&n==0) break;
    vector<int> year;
    for(int i=0;i<n*15;i++)
      year.push_back(0);
    int cnt=0;
    for(int i=m;;i++){
      if(year[i]==0){
	if(n==cnt){
	  cout<<i<<endl; break;
	}
	for(int j=i;j<n*15;j+=i)
	  year[j]=1;
	cnt++;
      }   
    }
  }
}
=======
#include <iostream>
#include <vector>
using namespace std;

int main(){
  int m,n;
  for(;;){
    cin>>m>>n;
    if(m==0&&n==0) break;
    vector<int> year;
    for(int i=0;i<n*15;i++)
      year.push_back(0);
    int cnt=0;
    for(int i=m;;i++){
      if(year[i]==0){
	if(n==cnt){
	  cout<<i<<endl; break;
	}
	for(int j=i;j<n*15;j+=i)
	  year[j]=1;
	cnt++;
      }   
    }
  }
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
