#include <stdio.h>
#include <string.h>
#include <assert.h>


void inputProduction(int array[],int size);
int minimumDay(int array[],int size);
int maximumDay(int array[],int size);
int totalProduction(int array[],int size);
float averageProduction(int array[], int size);
void compareProduction(int array1[],int array2[],int array3[],int size);
void displayProduction(int array[],int size,int day);



int main()
{
  int week1_production[7] = {};
  int week2_production[7] = {};
  int production_highest[7] = {};

  inputProduction(week1_production,7);
  inputProduction(week2_production,7);

  printf("\n\nMaximum Production of week 1 = ");
  displayProduction(week1_production,7,maximumDay(week1_production,7));

  printf("\nMaximum Production of week 2 = ");
  displayProduction(week2_production,7,maximumDay(week2_production,7));

  printf("\nMinimum Production of week 1 = ");
  displayProduction(week1_production,7,minimumDay(week1_production,7));

  printf("\nMinimum Production of week 2 = ");
  displayProduction(week2_production,7,minimumDay(week2_production,7));

  printf("\nAverage Production of week 1 = %.2f",averageProduction(week1_production,7));
  printf("\nAverage Production of week 2 = %.2f",averageProduction(week2_production,7));

  printf("\nTotal Production of both week = %d",totalProduction(week1_production,7)+totalProduction(week2_production,7));

  compareProduction(week1_production,week2_production,production_highest,7);


  return 0;
}



void inputProduction(int array[],int size)
{
  int i;

  for(i=0;i<size;++i)
  {
    printf("Enter Production of day %d : ",i+1);
    scanf("%d",&array[i]);
  }
}

int minimumDay(int array[],int size)
{
  int i,day,min=999;

  for(i=0;i<size;++i)
  {
    if(array[i]<min)
    {
      min = array[i];
      day = i+1;
    }
  }

  return day;
}

int maximumDay(int array[],int size)
{
  int i,day,max=0;

  for(i=0;i<size;++i)
  {
    if(array[i]>max)
    {
      max = array[i];
      day = i+1;
    }
  }

  return day;
}

int totalProduction(int array[],int size)
{
  int i,tot=0;

  for(i=0;i<size;++i)
  {
    tot += array[i];
  }

  return tot;
}

float averageProduction(int array[], int size)
{
  int i,tot=0;
  float avg=0;

  for(i=0;i<size;++i)
  {
    tot += array[i];
  }

  avg = tot/7.0;

  return avg;
}

void compareProduction(int array1[],int array2[],int array3[],int size)
{
  int i;

  for(i=0;i<size;++i)
  {
    if(array1[i]>array2[i])
    {
      array3[i] = array1[i];
    }
    else
    {
      array3[i] = array2[i];
    }
  }

  for(i=0;i<7;++i)
  {
    printf("\nHighest production of day %d = %d ",i+1,array3[i]);
  }
}

void displayProduction(int array[],int size,int day)
{
  printf("%d",array[day-1]);
}