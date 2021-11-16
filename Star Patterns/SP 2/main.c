#include <stdio.h>

int main(void) 
{
  int i,j,z=5;

  for(i=0;i<5;++i)
  {
    for(j=0;j<z;++j)
    {
      printf("*");
    }
    puts("");
    --z;
  }

  for(i=0;i<6;++i)
  {
    for(j=0;j<=i;++j)
    {
      printf("*");
    }
    puts("");
  }

  return 0;
}
