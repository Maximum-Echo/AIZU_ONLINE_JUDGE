#include <stdio.h>

int main(void)
{
  int val,chg,i,sum;

  for(;;){
    sum=0;
    scanf("%d", &val);
    if(val==0) break;

    chg=1000-val;
    if(chg>=500){
      sum++;
      chg=chg-500;
    }
    if(chg>=100){
      for(;chg>=100;){
	sum++;
	chg=chg-100;
      }
    }
    if(chg>=50){
      sum++;
      chg=chg-50;
    }
    if(chg>=10){
      for(;chg>=10;){
	sum++;
	chg=chg-10;
      }
    }
    if(chg>=5){
      sum++;
      chg=chg-5;
    }
    if(chg>=1){
      for(;chg!=0;){
	sum++;
	chg=chg-1;
      }
    }

    printf("%d\n", sum);
  }

  return 0;
}
