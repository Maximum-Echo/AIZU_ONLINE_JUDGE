#include<stdio.h>

int main(void)
{
  int i,j,k,x,count;
  char A[1025];
  char number[10][6]={
    {".,!? "},
    {"abc"},
    {"def"},
    {"ghi"},
    {"jkl"},
    {"mno"},
    {"pqrs"},
    {"tuv"},
    {"wxyz"},
  };
  scanf("%d",&x);
  for(i=0;i<x;i++){
    count=0;
    scanf("%s",A);
    for(j=0;A[j]!='\0';j++){
      if(A[j]=='0'&& j>0){
	if(('2'<=A[j-1] && A[j-1]<='6') || A[j-1]=='8'){
	  printf("%c",number[A[j-1]-'1'][(count-1)%3]);
	} else if(A[j-1]=='1'){
	  printf("%c",number[A[j-1]-'1'][(count-1)%5]);
	} else if(A[j-1]=='0'){
	} else {
	  printf("%c",number[A[j-1]-'1'][(count-1)%4]);
	}
	count=0;
      }else if(A[j]!='0'){
	count++;
      }
    }
    puts("");
  }

  return 0;
}
