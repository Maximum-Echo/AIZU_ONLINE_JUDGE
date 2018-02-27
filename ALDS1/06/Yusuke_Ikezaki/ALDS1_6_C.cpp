#include <iostream>
#include <vector>
#include <utility>
using namespace std;

typedef pair<char,int> pci;

int PARTITION(pci a[],int p,int r){
  int x=a[r].second;
  int i=p-1;
  for(int j=p;j<=r-1;j++){
    if(a[j].second<=x){
      i++;
      pci tmp=a[i];
      a[i]=a[j];
      a[j]=tmp;
    }
  }
  pci tmp=a[i+1];
  a[i+1]=a[r];
  a[r]=tmp;
  return i+1;
}

void QUICKSORT(pci a[],int p,int r){
  if(p<r){
    int q=PARTITION(a,p,r);
    QUICKSORT(a,p,q-1);
    QUICKSORT(a,q+1,r);
  }
}

int main(){
  pci a[100000];
  int n,m;
  char c;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>c>>m;
    a[i]=make_pair(c,m);
  }
  QUICKSORT(a,0,n-1);
  for(int i=0;i<n;i++)
    cout<<a[i].second<<" ";
  cout<<endl;
}
