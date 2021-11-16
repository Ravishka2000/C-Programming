#include <stdio.h>

int main(void) 
{
  int i,j,z=4;

  for(i=0;i<4;++i)
  {
    for(j=0;j<z;++j)
    {
      printf("*");
    }
    puts("");
    ++z;
  }

  z=6;

  for(i=0;i<6;++i)
  {
    for(j=0;j<z;++j)
    {
      printf("*");
    }
    puts("");
    --z;
  }

  return 0;
}
