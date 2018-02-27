#include <stdio.h>

int main(void)
{
  int T,P,R,tID,pID,time,i,j,tmp,rank[50];
  char mes[10];

  for(;;){
    scanf("%d %d %d", &T, &P, &R);
    if(!(T|P|R)) break;

    int jud[50][10]={0}; 
    int wro[50][10]={0}; int sum[50]={0}; int pen[50]={0};
    for(i=0;i<R;i++){
      scanf("%d %d %d %s", &tID, &pID, &time, &mes);
      if(!strcmp(mes,"CORRECT")){
	jud[tID-1][pID-1]=1; pen[tID-1]+=wro[tID-1][pID-1]*1200+time;
      } else {
	wro[tID-1][pID-1]++;
      }
    }
    for(i=0;i<T;i++){
      for(j=0;j<P;j++){
	sum[i]+=jud[i][j];
      }
      rank[i]=i;
    }
    for(i=1;i<T;i++){
      for(j=1;j<T;j++){
	if(sum[rank[j-1]]<sum[rank[j]]){
	  tmp=rank[j-1]; rank[j-1]=rank[j]; rank[j]=tmp;
	} else if(sum[rank[j-1]]==sum[rank[j]]&&pen[rank[j-1]]>pen[rank[j]]){
	  tmp=rank[j-1]; rank[j-1]=rank[j]; rank[j]=tmp;
	}
      }
    }
    for(i=0;i<T;i++){
      printf("%d %d %d\n", rank[i]+1, sum[rank[i]], pen[rank[i]]);
    }
  }
  
  return 0;
}
