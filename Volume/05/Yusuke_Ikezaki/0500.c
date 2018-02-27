#include <stdio.h>

int main(void){
  int i,n;
  int card[10001][2];

  for(;;){
    scanf("%d", &n);
    if(n==0) break;

    int ansa=0,ansb=0;
    int suma[10001]={0};
    int sumb[10001]={0};

    for(i=0;i<n;i++){
      scanf("%d %d", &card[i][0], &card[i][1]);
      if(card[i][0]>card[i][1]){
	suma[i]=card[i][0]+card[i][1];
      } else if(card[i][0]<card[i][1]){
	sumb[i]=card[i][0]+card[i][1];
      } else {
	suma[i]=sumb[i]=card[i][0];
      }
      ansa=ansa+suma[i];
      ansb=ansb+sumb[i];
    }
    printf("%d %d\n", ansa, ansb);
  }

  return 0;
}
