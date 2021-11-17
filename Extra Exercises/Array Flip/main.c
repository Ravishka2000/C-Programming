#include <stdio.h>

int main()
{

  int num[5] = {2, 5, 8, 4, 9};
  int new[5],z=4;

  for(int i=0;i<5;++i)
  {
    new[i]=num[i+z];
    z-=2;

    printf("%d ",new[i]);
  }
  
  return 0;
}
