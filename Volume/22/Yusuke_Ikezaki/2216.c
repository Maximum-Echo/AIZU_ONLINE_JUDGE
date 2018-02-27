#include <stdio.h>

int main(void){
  int val,pay,rem;

  for(;;){
    int ans1=0,ans2=0,ans3=0;
    scanf("%d %d", &val, &pay);
    if(val==0&&pay==0) break;

    rem=pay-val;
    for(;;){
      if(rem<1000) break;
      if(rem-1000>=0){
	rem-=1000;
	ans3++;
      }
    }
    for(;;){
      if(rem<500) break;
      if(rem-500>=0){
      rem-=500;
      ans2++;
      }
    }
    for(;;){
      if(rem==0) break;
      if(rem-100>=0){
      rem-=100;
      ans1++;
      }
    }
    printf("%d %d %d\n", ans1, ans2, ans3);
  }

  return 0;
}
