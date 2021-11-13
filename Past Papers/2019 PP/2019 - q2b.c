#include <stdio.h>

int main()
{
	int i,j;
	int ratings[3][4];
	float avg[3]={},tot[3] = {};
	int max=0;
	
	for(i=0;i<3;++i)
	{
		for(j=0;j<4;++j)
		{
			printf("Enter ratings for Movie %d: ",i+1);
			scanf("%d",&ratings[i][j]);
		}
	}
	
	for(i=0;i<3;++i)
	{
		for(j=0;j<4;++j)
		{
			printf("%d  ",ratings[i][j]);
		}
		puts("");
	}
	
	for(i=0;i<3;++i)
	{
		for(j=0;j<4;++j)
		{
			tot[i] += ratings[i][j];
		}
		avg[i] = tot[i]/4.0;
		printf("\nAverage for Movie %d = %.1f",i+1,avg[i]);
	}
	
	for(i=0;i<3;++i)
	{
		if(avg[i]>max)
		{
			max = i+1;
			
		}
	}
	
	printf("\nMaximum Avg Movie = %d",max);
	
	return 0;
}
