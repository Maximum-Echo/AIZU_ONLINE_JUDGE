<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(void)
{
  int m,i,j,k,l,len,len1,len2,ans;

  scanf("%d", &m);
  for(i=0;i<m;i++){
    char tra[73];
    gets(tra);
    len=strlen(tra);
    ans=0;
    for(j=1;j<len;j++){
      char res[j*2][73],sto1[72],sto2[72],rev[72],dep1[73],dep2[73];
      for(k=0;k<j;k++){
	sto1[k]=tra[k]; len1=strlen(sto1);
      }
      for(l=k;l<len;l++){
	sto2[l]=tra[l]; len2=strlen(sto2);
      }
      for(k=0;k<len1;k++){
	rev[k]=sto1[len1-k-1];
      }
      strcpy(dep1,rev); strcat(dep1,sto2);
      strcpy(dep2,sto2); strcat(dep2,rev);
      if(j==1){
	strcpy(res[0],dep1); strcpy(res[1],dep2);
      } else {
	strcpy(res[j*2-2],dep1); strcpy(res[j*2-1],dep2);
      }
      for(l=0;l<j*2;l++){
	if(strcmp(dep1,res[l])==0) break;
      }
      if(l==j*2) ans++;
      for(l=0;l<j*2;l++){
	if(strcmp(dep2,res[l])==0) break;
      }
      if(l==j*2) ans++;
    }
    printf("%d\n", ans);
  }

  return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main(void)
{
  int m,i,j,k,l,len,len1,len2,ans;

  scanf("%d", &m);
  for(i=0;i<m;i++){
    char tra[73];
    gets(tra);
    len=strlen(tra);
    ans=0;
    for(j=1;j<len;j++){
      char res[j*2][73],sto1[72],sto2[72],rev[72],dep1[73],dep2[73];
      for(k=0;k<j;k++){
	sto1[k]=tra[k]; len1=strlen(sto1);
      }
      for(l=k;l<len;l++){
	sto2[l]=tra[l]; len2=strlen(sto2);
      }
      for(k=0;k<len1;k++){
	rev[k]=sto1[len1-k-1];
      }
      strcpy(dep1,rev); strcat(dep1,sto2);
      strcpy(dep2,sto2); strcat(dep2,rev);
      if(j==1){
	strcpy(res[0],dep1); strcpy(res[1],dep2);
      } else {
	strcpy(res[j*2-2],dep1); strcpy(res[j*2-1],dep2);
      }
      for(l=0;l<j*2;l++){
	if(strcmp(dep1,res[l])==0) break;
      }
      if(l==j*2) ans++;
      for(l=0;l<j*2;l++){
	if(strcmp(dep2,res[l])==0) break;
      }
      if(l==j*2) ans++;
    }
    printf("%d\n", ans);
  }

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
