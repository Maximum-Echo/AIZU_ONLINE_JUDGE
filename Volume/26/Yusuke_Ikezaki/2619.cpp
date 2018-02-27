<<<<<<< HEAD
#include <iostream>
using namespace std;

struct thread{
  int to;
  int val;
  string s;
};

void print(struct thread t[],int index,int n){
  for(int i=0;i<t[index].val;i++) cout<<".";
  cout<<t[index].s<<endl;
  for(int i=index+1;i<=n;i++){
    if(t[i].to==index) print(t,i,n);
  }
}

int main(){
  struct thread t[1001];
  t[0].val=-1;
  int n;

  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>t[i].to>>t[i].s;
    t[i].val=t[t[i].to].val+1;
  }
  print(t,1,n);
}
=======
#include <iostream>
using namespace std;

struct thread{
  int to;
  int val;
  string s;
};

void print(struct thread t[],int index,int n){
  for(int i=0;i<t[index].val;i++) cout<<".";
  cout<<t[index].s<<endl;
  for(int i=index+1;i<=n;i++){
    if(t[i].to==index) print(t,i,n);
  }
}

int main(){
  struct thread t[1001];
  t[0].val=-1;
  int n;

  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>t[i].to>>t[i].s;
    t[i].val=t[t[i].to].val+1;
  }
  print(t,1,n);
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
