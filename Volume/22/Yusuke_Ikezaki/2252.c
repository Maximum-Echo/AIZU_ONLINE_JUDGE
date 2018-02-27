#include <stdio.h>
#include <string.h>

int main(void)
{
  int i,j,ans,len,key,row[32];
  char left[16]={"qwertasdfgzxcvb"};
  char right[12]={"yuiophjklnm"};

  for(;;){
    char str[33];
    scanf("%s", str);
    if(strcmp(str,"#")==0) break;
    len=strlen(str);
    ans=0;

    for(i=0;i<len;i++){
      for(j=0;j<15;j++){
	if(str[i]!=left[j]&&j<14) continue;
	if(str[i]==left[j]){
	  row[i]=0;
	  break;
	}
	if(str[i]!=left[j]&&j==14) row[i]=1;
      }
    }
    for(i=1;i<len;i++){
      if(row[i]!=row[i-1]) ans++;
    }
    printf("%d\n", ans);
  }
  
  return 0;
}
