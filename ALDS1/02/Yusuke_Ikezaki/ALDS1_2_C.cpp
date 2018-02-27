#include <iostream>
using namespace std;

void bubble_sort(int n,string cards[]){
  for(int i=0;i<n;i++)
    for(int j=n-1;j>i;j--)
      if(cards[j][1]<cards[j-1][1]){
	string tmp=cards[j-1];
	cards[j-1]=cards[j];
	cards[j]=tmp;
      }
}

void selection_sort(int n,string cards[]){
  for(int i=0;i<n;i++){
    int min=i;
    for(int j=i+1;j<n;j++)
      if(cards[j][1]<cards[min][1]) min=j; 
    string tmp=cards[i];
    cards[i]=cards[min];
    cards[min]=tmp;
  }
}

bool isStable(int n,string a[],string b[]){
  for(int i=0;i<n;i++)
    if(a[i]!=b[i]) return false;
  return true;
}

int main(){
  int n;
  cin>>n;

  string cards[n],copy[n];
  for(int i=0;i<n;i++){
    cin>>cards[i];
    copy[i]=cards[i];
  }

  bubble_sort(n,cards);
  for(int i=0;i<n-1;i++) cout<<cards[i]<<" ";
  cout<<cards[n-1]<<endl;
  cout<<"Stable"<<endl;

  selection_sort(n,copy);
  for(int i=0;i<n-1;i++) cout<<copy[i]<<" ";
  cout<<copy[n-1]<<endl;
  if(isStable(n,cards,copy)) cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;
}
