# include <stdio.h>

int main()
{
  int att[5][5] = {{1, 0, 1, 1, 1}, {1, 1,1,1,1},{1,1,0,1,1},{1,1,1,1,1},{1,1,1,1,0}};
  int i,j,com[4]={};

  for(i=0;i<4;++i)
  {
    for(j=0;j<5;++j)
    {
      if(att[i][j]==1)
      {
        ++com[i];
      }
    }
  }

  printf("Students who has attended to the class all five days : ");

  for(i=0;i<4;++i)
  {
    if(com[i]==5)
    {
      printf("%d, ",i+1);
    }
  }


  return 0;
}
