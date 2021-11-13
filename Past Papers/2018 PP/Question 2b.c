#include <stdio.h>

int main()
{
  char bulb[4][4];
  int i,j;

  for(i=0;i<4;++i)
  {
    for(j=0;j<4;++j)
    {
      printf("Enter colour of the bulb row %d column %d : ",i+1,j+1);
      scanf(" %c",&bulb[i][j]);
    }
  }

  for(i=0;i<4;++i)
  {
    for(j=0;j<4;++j)
    {
      printf("%c ",bulb[i][j]);
    }
    puts("");
  }

  printf("\n\n<<< Positions of the red bulbs >>>\n\n");

  for(i=0;i<4;++i)
  {
    for(j=0;j<4;++j)
    {
      if((bulb[i][j]=='r') || (bulb[i][j]=='R'))
      {
        printf("[%d,%d] , ",i+1,j+1);
      }
    }
  }

  return 0;
}
