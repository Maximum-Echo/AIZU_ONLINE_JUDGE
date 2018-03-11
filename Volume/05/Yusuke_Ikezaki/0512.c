<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  char alp[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char key[27]="DEFGHIJKLMNOPQRSTUVWXYZABC";
  char data[1001];
  int i,j;

  scanf("%s", data);

  for(i=0;data[i]!='\0';i++){
    for(j=0;j<26;j++){
      if(data[i]==key[j]){
	putchar(alp[j]);
	break;
      }
    }
  }
  printf("\n");

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  char alp[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char key[27]="DEFGHIJKLMNOPQRSTUVWXYZABC";
  char data[1001];
  int i,j;

  scanf("%s", data);

  for(i=0;data[i]!='\0';i++){
    for(j=0;j<26;j++){
      if(data[i]==key[j]){
	putchar(alp[j]);
	break;
      }
    }
  }
  printf("\n");

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
