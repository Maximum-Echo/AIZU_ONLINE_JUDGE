<<<<<<< HEAD
#include <stdio.h>

struct rect{ 
  int h;
  int w;
};

int rect_cmp(struct rect x, struct rect y)
{
  if(x.h * x.h + x.w * x.w < y.h * y.h + y.w * y.w){
    return -1;
  } else if(x.h * x.h + x.w * x.w == y.h * y.h + y.w * y.w){
    if(x.h < y.h) return -1;
    else if(x.h == y.h) return 0;
    else return 1;
  } else return 1;
}


int main(void)
{
  int H,W;
  struct rect x;
  struct rect y;

  for(;;){ 
    struct rect std;
    scanf("%d %d", &std.h, &std.w);
    if(!(std.h|std.w)) break;

    struct rect ans;
    ans.h=150;
    ans.w=150;

    struct rect cmp;
    for(cmp.h = 1; cmp.h < 150; cmp.h++){
      for(cmp.w = cmp.h+1; cmp.w < 150; cmp.w++){
	if(rect_cmp(std, cmp) < 0 && rect_cmp(cmp, ans) < 0){
	  ans = cmp;
	}
      }
    }
    printf("%d %d\n", ans.h, ans.w);
  }

  return 0;
}
=======
#include <stdio.h>

struct rect{ 
  int h;
  int w;
};

int rect_cmp(struct rect x, struct rect y)
{
  if(x.h * x.h + x.w * x.w < y.h * y.h + y.w * y.w){
    return -1;
  } else if(x.h * x.h + x.w * x.w == y.h * y.h + y.w * y.w){
    if(x.h < y.h) return -1;
    else if(x.h == y.h) return 0;
    else return 1;
  } else return 1;
}


int main(void)
{
  int H,W;
  struct rect x;
  struct rect y;

  for(;;){ 
    struct rect std;
    scanf("%d %d", &std.h, &std.w);
    if(!(std.h|std.w)) break;

    struct rect ans;
    ans.h=150;
    ans.w=150;

    struct rect cmp;
    for(cmp.h = 1; cmp.h < 150; cmp.h++){
      for(cmp.w = cmp.h+1; cmp.w < 150; cmp.w++){
	if(rect_cmp(std, cmp) < 0 && rect_cmp(cmp, ans) < 0){
	  ans = cmp;
	}
      }
    }
    printf("%d %d\n", ans.h, ans.w);
  }

  return 0;
}
>>>>>>> 80c961cd5d6d2963c693ddf5d8d6a041591fcd3c
