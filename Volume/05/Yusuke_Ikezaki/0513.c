<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int n,m,i,j,k,way;
  int card1[200];
  int card2[200];

  scanf("%d", &n);
  scanf("%d", &m);

  for(i=0;i<2*n;i++){
    card1[i]=i+1;
  }
  for(i=0;i<m;i++){
    scanf("%d", &way);
    if(i%2==0){
      if(way!=0){
	for(j=0;j<way;j++){
	  card2[j]=card1[way+j];
	}
	for(j=0;j<2*n-way;j++){
	  card2[way+j]=card1[j];
	}
      }
      if(way==0){
	for(j=0;j<2*n;j+2){
	  k=0;
	  card2[j]=card1[k];
	  k++;
	}
	for(j=1;j<2*n;j+2){
	  k=0;
	  card2[j]=card1[k];
	  k++;
	}
      }
    }
    if(i%2==1){
      if(way!=0){
	for(j=0;j<way;j++){
	  card1[j]=card2[way+j];
	}
	for(j=0;j<2*n-way;j++){
	  card1[way+j]=card2[j];
	}
      }
      if(way==0){
	for(j=0;j<2*n;j+2){
	  k=0;
	  card1[j]=card2[k];
	  k++;
	}
	for(j=1;j<2*n;j+2){
	  k=0;
	  card1[j]=card2[k];
	  k++;
	}
      }
    }
  }
  if(m%2==0){
    for(i=0;i<2*n;i++){
      printf("%d\n", card1[i]);
    }
  }
  if(m%2==1){
    for(i=0;i<2*n;i++){
      printf("%d\n", card2[i]);
    }
  }

  return 0;
}

      
=======
#include <stdio.h>

int main(void)
{
  int n,m,i,j,k,way;
  int card1[200];
  int card2[200];

  scanf("%d", &n);
  scanf("%d", &m);

  for(i=0;i<2*n;i++){
    card1[i]=i+1;
  }
  for(i=0;i<m;i++){
    scanf("%d", &way);
    if(i%2==0){
      if(way!=0){
	for(j=0;j<way;j++){
	  card2[j]=card1[way+j];
	}
	for(j=0;j<2*n-way;j++){
	  card2[way+j]=card1[j];
	}
      }
      if(way==0){
	for(j=0;j<2*n;j+2){
	  k=0;
	  card2[j]=card1[k];
	  k++;
	}
	for(j=1;j<2*n;j+2){
	  k=0;
	  card2[j]=card1[k];
	  k++;
	}
      }
    }
    if(i%2==1){
      if(way!=0){
	for(j=0;j<way;j++){
	  card1[j]=card2[way+j];
	}
	for(j=0;j<2*n-way;j++){
	  card1[way+j]=card2[j];
	}
      }
      if(way==0){
	for(j=0;j<2*n;j+2){
	  k=0;
	  card1[j]=card2[k];
	  k++;
	}
	for(j=1;j<2*n;j+2){
	  k=0;
	  card1[j]=card2[k];
	  k++;
	}
      }
    }
  }
  if(m%2==0){
    for(i=0;i<2*n;i++){
      printf("%d\n", card1[i]);
    }
  }
  if(m%2==1){
    for(i=0;i<2*n;i++){
      printf("%d\n", card2[i]);
    }
  }

  return 0;
}

      
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
