#include <stdio.h>
#include <string.h>

int main(void)
{
  int n,i,ans,l,r,lu,ld,ru,rd;
  char step[3];

  for(;;){
    scanf("%d", &n);
    if(!n) break;

    l=0; r=0; lu=0; ld=0; ru=0; rd=0;
    ans=0;
    for(i=0;i<n;i++){
      scanf("%s", step);
      if(strcmp(step,"lu")==0){
	if(r==1&&ru==1){
	  ans++;
	  ru=0;
	} else if(r==0) lu=1;
	l=1;
      } else if(strcmp(step,"ru")==0){
	if(l==1&&lu==1){
	  ans++;
	  lu=0;
	} else if(l==0) ru=1;
	r=1;
      } else if(strcmp(step,"ld")==0){
	if(r==0&&rd==1){
	  ans++;
	  rd=0;
	} else if(r==1) ld=1;
	l=0;
      } else if(strcmp(step,"rd")==0){
	if(l==0&&ld==1){
	  ans++;
	  ld=0;
	} else if(l==1) rd=1;
	r=0;
      }
    }
    printf("%d\n", ans);
  }

  return 0;
}
