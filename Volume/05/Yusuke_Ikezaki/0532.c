#include <stdio.h>

int main(void)
{
  int inh,outh,inm,outm,ins,outs,ansh,ansm,anss,i,j,k;

  for(i=0;i<3;i++){
    ansh=0;
    ansm=0;
    anss=0;

    scanf("%d %d %d", &inh, &inm, &ins);
    scanf("%d %d %d", &outh, &outm, &outs);

    ansh=outh-inh;

    if(inm<=outm){
      ansm=outm-inm;
    } else if(inm>outm){
      ansm=60-inm+outm;
      ansh--;
    }

    if(ins<=outs){
      anss=outs-ins;
    } else if(ins>outs&&ansm!=0){
      anss=60-ins+outs;
      ansm--;
    } else if(ins>outs&&ansm==0){
      anss=60-ins+outs;
      ansm=59;
      ansh--;
    }

    printf("%d %d %d\n", ansh, ansm, anss);
  }

  return 0;
}
