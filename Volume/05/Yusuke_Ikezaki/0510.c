<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
  int scrA[4];
  int scrB[4];
  int sumA,sumB;

  scanf("%d %d %d %d", &scrA[0], &scrA[1], &scrA[2], &scrA[3]);
  scanf("%d %d %d %d", &scrB[0], &scrB[1], &scrB[2], &scrB[3]);

  sumA=scrA[0]+scrA[1]+scrA[2]+scrA[3];
  sumB=scrB[0]+scrB[1]+scrB[2]+scrB[3];

  if(sumA>=sumB) printf("%d\n", sumA);
  if(sumA<sumB) printf("%d\n", sumB);

  return 0;
}
=======
#include <stdio.h>

int main(void)
{
  int scrA[4];
  int scrB[4];
  int sumA,sumB;

  scanf("%d %d %d %d", &scrA[0], &scrA[1], &scrA[2], &scrA[3]);
  scanf("%d %d %d %d", &scrB[0], &scrB[1], &scrB[2], &scrB[3]);

  sumA=scrA[0]+scrA[1]+scrA[2]+scrA[3];
  sumB=scrB[0]+scrB[1]+scrB[2]+scrB[3];

  if(sumA>=sumB) printf("%d\n", sumA);
  if(sumA<sumB) printf("%d\n", sumB);

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
