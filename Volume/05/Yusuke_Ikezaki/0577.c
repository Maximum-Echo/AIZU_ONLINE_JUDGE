<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int N,num[600],i,j,k;

  scanf("%d", &N);
  for(i=0;i<3*N;){
    scanf("%d %d %d", &num[i], &num[i+1], &num[i+2]);
    i=i+3;
  }
  for(i=0;i<3;){
    for(j=0;j<N;j++){
      if(num[3*j+i]==num[3*(j-1)+i]) po=0;
=======
#include <stdio.h>

int main(void)
{
  int N,num[600],i,j,k;

  scanf("%d", &N);
  for(i=0;i<3*N;){
    scanf("%d %d %d", &num[i], &num[i+1], &num[i+2]);
    i=i+3;
  }
  for(i=0;i<3;){
    for(j=0;j<N;j++){
      if(num[3*j+i]==num[3*(j-1)+i]) po=0;
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
