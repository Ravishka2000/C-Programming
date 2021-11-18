#include <stdio.h>

int main()
{
  int rows,column;

  printf("Input the rows and columns of the matrix : ");
  scanf("%d %d",&rows,&column);
  
  int matrix[rows][column];
  int newmatrix[column][rows];

  printf("Input Elements in the first matrix : ");

  for(int i=0;i<rows;++i)
  {
    for(int j=0;j<column;++j)
    {
      printf("\nElement - [%d],[%d] : ",i,j);
      scanf("%d",&matrix[i][j]);
    }
  }
  
  printf("\nThe matrix is : \n\n");

  for(int i=0;i<rows;++i)
  {
    for(int j=0;j<column;++j)
    {
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }

  for(int i=0;i<column;++i)
  {
    for(int j=0;j<rows;++j)
    {
      newmatrix[i][j]=matrix[j][i];
    }
  }

  printf("\n\nTranspose of the matrix is : \n\n");

  for(int i=0;i<column;++i)
  {
    for(int j=0;j<rows;++j)
    {
      printf("%d ",newmatrix[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
