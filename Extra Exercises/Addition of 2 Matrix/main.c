#include <stdio.h>

int main() 
{
  int size;

  printf("Input the Size of the square matrix : ");
  scanf("%d",&size);
  
  int matrix1[size][size];
  int matrix2[size][size];
  int sum[size][size];

  printf("Input Elements in the first matrix : ");

  for(int i=0;i<size;++i)
  {
    for(int j=0;j<size;++j)
    {
      printf("\nElement - [%d],[%d] : ",i,j);
      scanf("%d",&matrix1[i][j]);
    }
  }

  printf("\n\nInput Elements in the second matrix : ");

  for(int i=0;i<size;++i)
  {
    for(int j=0;j<size;++j)
    {
      printf("\nElement - [%d],[%d] : ",i,j);
      scanf("%d",&matrix2[i][j]);
    }
  }
  
  printf("\nThe first matrix is : \n\n");

  for(int i=0;i<size;++i)
  {
    for(int j=0;j<size;++j)
    {
      printf("%d ",matrix1[i][j]);
    }
    printf("\n");
  }
  
  printf("\n\nThe second matrix is : \n\n");

  for(int i=0;i<size;++i)
  {
    for(int j=0;j<size;++j)
    {
      printf("%d ",matrix2[i][j]);
    }
    printf("\n");
  }
  
  for(int i=0;i<size;++i)
  {
    for(int j=0;j<size;++j)
    {
      sum[i][j]=matrix1[i][j]+matrix2[i][j];
    }
  }
  
  printf("\n\nThe Addition of two matrix is : \n\n");

  for(int i=0;i<size;++i)
  {
    for(int j=0;j<size;++j)
    {
      printf("%d ",sum[i][j]);
    }
    printf("\n");
  }
  

  return 0;
}
