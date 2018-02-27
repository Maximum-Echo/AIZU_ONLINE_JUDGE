#include <stdio.h>

int main(void)
{
  int M,T,P,R,tID,pID,time,i,j,tmp,jud,rank[50];

  for(;;){
    scanf("%d %d %d %d", &M, &T, &P, &R);
    if(!(M|T|P|R)) break;

    int cor[50][10]={0}; int wro[50][10]={0};
    int sum[50]={0}; int pen[50]={0};
    for(i=0;i<R;i++){
      scanf("%d %d %d %d", &time, &tID, &pID, &jud);
      if(!jud){
	cor[tID-1][pID-1]=1; pen[tID-1]+=wro[tID-1][pID-1]*20+time;
      } else {
	wro[tID-1][pID-1]++;
      }
    }
    for(i=0;i<T;i++){
      for(j=0;j<P;j++){
	sum[i]+=cor[i][j];
      }
      rank[i]=T-1-i;
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
    for(i=0;i<T-1;i++){
      if(sum[rank[i]]>sum[rank[i+1]])
	printf("%d,", rank[i]+1);
      else if(sum[rank[i]]==sum[rank[i+1]]&&pen[rank[i]]<pen[rank[i+1]])
	printf("%d,", rank[i]+1);
      else if(sum[rank[i]]==sum[rank[i+1]]&&pen[rank[i]]==pen[rank[i+1]])
	printf("%d=", rank[i]+1);
    }
    printf("%d\n", rank[T-1]+1);
  }
  
  return 0;
}
