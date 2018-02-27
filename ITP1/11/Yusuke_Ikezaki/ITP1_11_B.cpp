#include <iostream>
using namespace std;

int main(void)
{
  int i,n,val1[24],val2[24],N,E,W,S,U,D;

  cin>>U>>S>>E>>W>>N>>D;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>val1[i]>>val2[i];
    if(val1[i]==N&&val2[i]==E) cout<<D<<endl;
    if(val1[i]==W&&val2[i]==N) cout<<D<<endl;
    if(val1[i]==S&&val2[i]==W) cout<<D<<endl;
    if(val1[i]==E&&val2[i]==S) cout<<D<<endl;
    if(val1[i]==E&&val2[i]==N) cout<<U<<endl;
    if(val1[i]==N&&val2[i]==W) cout<<U<<endl;
    if(val1[i]==W&&val2[i]==S) cout<<U<<endl;
    if(val1[i]==S&&val2[i]==E) cout<<U<<endl;
    if(val1[i]==U&&val2[i]==E) cout<<N<<endl;
    if(val1[i]==E&&val2[i]==D) cout<<N<<endl;
    if(val1[i]==D&&val2[i]==W) cout<<N<<endl;
    if(val1[i]==W&&val2[i]==U) cout<<N<<endl;
    if(val1[i]==U&&val2[i]==W) cout<<S<<endl;
    if(val1[i]==W&&val2[i]==D) cout<<S<<endl;
    if(val1[i]==D&&val2[i]==E) cout<<S<<endl;
    if(val1[i]==E&&val2[i]==U) cout<<S<<endl;
    if(val1[i]==U&&val2[i]==S) cout<<E<<endl;
    if(val1[i]==S&&val2[i]==D) cout<<E<<endl;
    if(val1[i]==D&&val2[i]==N) cout<<E<<endl;
    if(val1[i]==N&&val2[i]==U) cout<<E<<endl;
    if(val1[i]==U&&val2[i]==N) cout<<W<<endl;
    if(val1[i]==N&&val2[i]==D) cout<<W<<endl;
    if(val1[i]==D&&val2[i]==S) cout<<W<<endl;
    if(val1[i]==S&&val2[i]==U) cout<<W<<endl;
  }
}
