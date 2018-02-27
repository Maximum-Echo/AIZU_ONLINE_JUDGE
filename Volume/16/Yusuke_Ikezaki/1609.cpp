#include <iostream>
using namespace std;

int main(){
  string table="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for(;;){
    int n;
    cin>>n;
    if(n==0) break;
    int cnt[26];
    for(int i=0;i<26;i++)
      cnt[i]=0;
    char c[n];
    for(int i=0;i<n;i++)
      cin>>c[i];
    char max_char;
    for(int i=0;i<n;i++){
      cnt[c[i]-'A']++;
      int max=0;
      for(int j=0;j<26;j++)
	if(cnt[j]>max){
	  max=cnt[j]; max_char=table[j];
	}
      bool jud=true;
      int max_num=0;
      for(int j=0;j<26;j++){
	if(cnt[j]==max) max_num++;
	else if(cnt[j]+n-(i+1)>=max){
	  jud=false; break;
	}
      }
      if(jud){
	if(max_num==1){
	  cout<<max_char<<" "<<i+1<<endl; break;
	}
	if(i==n-1){
	  cout<<"TIE"<<endl;
	}
      }
    }
  }
}
