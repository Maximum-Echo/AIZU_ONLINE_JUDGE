#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long int point;
  int h,jud;
  for(;;){
    cin>>h;
    if(!h) break;
    vector<int> line1(11,0);
    vector<int> line2(11,0);
    vector<int> line3(11,0);
    vector<int> line4(11,0);
    vector<int> line5(11,0);
    for(int i=h-1;i>=0;i--)
      cin>>line1[i]>>line2[i]>>line3[i]>>line4[i]>>line5[i];
    point=0;
    for(;;){
      jud=0;
      for(int i=h-1;i>=0;i--){
	if(line1[i]==line2[i]&&line1[i]==line3[i]&&line1[i]!=line4[i]&&line1[i]){
	  point+=line1[i]*3;
	  line1.erase(line1.begin()+i);
	  line2.erase(line2.begin()+i);
	  line3.erase(line3.begin()+i);
	} else if(line2[i]==line3[i]&&line2[i]==line4[i]&&line2[i]!=line5[i]&&line2[i]!=line1[i]&&line2[i]){
	  point+=line2[i]*3;
	  line2.erase(line2.begin()+i);
	  line3.erase(line3.begin()+i);
	  line4.erase(line4.begin()+i);
	} else if(line3[i]==line4[i]&&line3[i]==line5[i]&&line3[i]!=line2[i]&&line3[i]){
	  point+=line3[i]*3;
	  line3.erase(line3.begin()+i);
	  line4.erase(line4.begin()+i);
	  line5.erase(line5.begin()+i);    
	} else if(line1[i]==line2[i]&&line1[i]==line3[i]&&line1[i]==line4[i]&&line1[i]!=line5[i]&&line1[i]){
	  point+=line1[i]*4;
	  line1.erase(line1.begin()+i);
	  line2.erase(line2.begin()+i);
	  line3.erase(line3.begin()+i);
	  line4.erase(line4.begin()+i);
	} else if(line2[i]==line3[i]&&line2[i]==line4[i]&&line2[i]==line5[i]&&line2[i]!=line1[i]&&line2[i]){
	  point+=line2[i]*4;
	  line2.erase(line2.begin()+i);
	  line3.erase(line3.begin()+i);
	  line4.erase(line4.begin()+i);
	  line5.erase(line5.begin()+i);
	} else if(line1[i]==line2[i]&&line1[i]==line3[i]&&line1[i]==line4[i]&&line1[i]==line5[i]&&line1[i]){
	  point+=line1[i]*5;
	  line1.erase(line1.begin()+i);
	  line2.erase(line2.begin()+i);
	  line3.erase(line3.begin()+i);
	  line4.erase(line4.begin()+i);
	  line5.erase(line5.begin()+i);
	} else {
	  jud++;
	}
      }
      if(jud==h) break;
    }
    cout<<point<<endl;
  }
}
