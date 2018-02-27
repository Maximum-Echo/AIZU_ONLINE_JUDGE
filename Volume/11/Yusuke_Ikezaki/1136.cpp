#include <bits/stdc++.h>
using namespace std;

typedef complex<int> P;

int main() {
  int n;
  P p[51][11];
  int m[51];

  while(cin>>n,n){
    for(int i=0;i<=n;i++){
      cin>>m[i];
      for(int j=0;j<m[i];j++)
        cin>>p[i][j].real()>>p[i][j].imag();
    }
    for(int i=1;i<=n;i++){
      if(m[0]!=m[i]) continue;
      bool success;
      int ox1,oy1,ox2,oy2;
      for(int k=0;k<4;k++){
        for(int j=0;j<m[0];j++)
          p[0][j]*=P(0,1);
        success=true;
        ox1=p[0][0].real(); oy1=p[0][0].imag();
        ox2=p[i][0].real(); oy2=p[i][0].imag();
        for(int j=0;j<m[0];j++){
          if(p[0][j].real()-ox1!=p[i][j].real()-ox2){
	    success=false; break;
	  }
          if(p[0][j].imag()-oy1!=p[i][j].imag()-oy2){
	    success=false; break;
	  }
        }
        if(success){
	  cout<<i<<endl; break;
	}
        success=true;
        ox1=p[0][m[0]-1].real(); oy1=p[0][m[0]-1].imag();
        ox2=p[i][0].real(); oy2=p[i][0].imag();
        for(int j=0;j<m[0];j++){
          if(p[0][m[0]-1-j].real()-ox1!=p[i][j].real()-ox2){
	    success=false; break;
	  }
          if(p[0][m[0]-1-j].imag()-oy1!=p[i][j].imag()-oy2){
	    success=false; break;
	  }
        }
        if(success){
	  cout<<i<<endl; break;
	}
      }
    }
    cout<<"+++++"<<endl;
  }
}
