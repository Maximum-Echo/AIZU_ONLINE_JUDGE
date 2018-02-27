#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int n,k,s,i,j,l,m,o,p,q,r,t,u,sum,ans;

  for(;;){
    cin>>n>>k>>s;
    if(!(n|k|s)) break;

    ans=0;
    if(k>0){
      for(i=1;i<=n-k+1;i++){
	sum=i;
	if(sum>s) break;
	if(sum==s&&k==1){
	  ans++; break;
	}
	if(k>1){
	  for(j=i+1;j<=n-k+2;j++){
	    sum=i+j;
	    if(sum>s) break;
	    if(sum==s&&k==2){
	      ans++; break;
	    }
	    if(k>2){
	      for(l=j+1;l<=n-k+3;l++){
		sum=i+j+l;
		if(sum>s) break;
		if(sum==s&&k==3){
		  ans++; break;
		}
		if(k>3){
		  for(m=l+1;m<=n-k+4;m++){
		    sum=i+j+l+m;
		    if(sum>s) break;
		    if(sum==s&&k==4){
		      ans++; break;
		    }
		    if(k>4){
		      for(o=m+1;o<=n-k+5;o++){
			sum=i+j+l+m+o;
			if(sum>s) break;
			if(sum==s&&k==5){
			  ans++; break;
			}
			if(k>5){
			  for(p=o+1;p<=n-k+6;p++){
			    sum=i+j+l+m+o+p;
			    if(sum>s) break;
			    if(sum==s&&k==6){
			      ans++; break;
			    }
			    if(k>6){
			      for(q=p+1;q<=n-k+7;q++){
				sum=i+j+l+m+o+p+q;
				if(sum>s) break;
				if(sum==s&&k==7){
				  ans++; break;
				}
				if(k>7){
				  for(r=q+1;r<=n-k+8;r++){
				    sum=i+j+l+m+o+p+q+r;
				    if(sum>s) break;
				    if(sum==s&&k==8){
				      ans++; break;
				    }
				    if(k>8){
				      for(t=r+1;t<=n-k+9;t++){
					sum=i+j+l+m+o+p+q+r+t;
					if(sum>s) break;
					if(sum==s&&k==9){
					  ans++; break;
					}
					if(k>9){
					  for(u=t+1;u<=n;u++){
					    sum=i+j+l+m+o+p+q+r+t+u;
					    if(sum>s) break;
					    if(sum==s){
					      ans++; break;
					    }
					  }
					}
				      }
				    }
				  }
				}
			      }
			    }
			  }
			}
		      }
		    }
		  }
		}
	      }	  
	    }
	  }
	}
      }
    }
    cout<<ans<<endl;
  }
}

