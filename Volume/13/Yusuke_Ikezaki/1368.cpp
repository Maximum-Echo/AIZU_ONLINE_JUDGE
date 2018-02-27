#include <iostream>
using namespace std;

int ssn;

int check_digit(int x[10][10],int a,int b,int c,int d){
  return x[x[x[x[0][a]][b]][c]][d];
}

int check(int x[10][10],int a,int b,int c,int d,int e){
  if(ssn==10000*a+1000*b+100*c+10*d+e) return 1;
  return x[x[x[x[x[0][a]][b]][c]][d]][e];
}

int human_error(int x[10][10],int a,int b,int c,int d,int e){
  ssn=10000*a+1000*b+100*c+10*d+e;
  for(int i=0;i<10;i++){
    if(i==a) continue;
    if(!check(x,i,b,c,d,e)) return 1;
  }
  for(int i=0;i<10;i++){
    if(i==b) continue;
    if(!check(x,a,i,c,d,e)) return 1;
  }
  for(int i=0;i<10;i++){
    if(i==c) continue;
    if(!check(x,a,b,i,d,e)) return 1;
  }
  for(int i=0;i<10;i++){
    if(i==d) continue;
    if(!check(x,a,b,c,i,e)) return 1;
  }
  for(int i=0;i<10;i++){
    if(i==e) continue;
    if(!check(x,a,b,c,d,i)) return 1;
  }
  if(!check(x,b,a,c,d,e)) return 1;
  if(!check(x,a,c,b,d,e)) return 1;
  if(!check(x,a,b,d,c,e)) return 1;
  if(!check(x,a,b,c,e,d)) return 1;
  return 0;
}

int main(){
  int x[10][10];
  for(int i=0;i<10;i++)
    for(int j=0;j<10;j++)
      cin>>x[i][j];

  int n=0;
  int e;
  for(int a=0;a<10;a++)
    for(int b=0;b<10;b++)
      for(int c=0;c<10;c++)
	for(int d=0;d<10;d++){
	  e=check_digit(x,a,b,c,d);
	  n+=human_error(x,a,b,c,d,e);
	}
  cout<<n<<endl;
}
