#include <stdio.h>

int main()
{
	
	int i,status=0;
	char name[30],n[30];
	long int loyal,l;
	
	FILE *ptr;
	ptr = fopen("loyalty.dat","w");
	
	if(ptr==0)
	{
		printf("Error");
		return -1;
	}
	
	fprintf(ptr,"7728369210 Dinesh");
	fprintf(ptr,"\n7773457219 Subash");
	
	fclose(ptr);
	
	for(i=1;i<=2;++i)
	{
		printf("Enter Name : ");
		scanf("%s",&name);
		
		printf("Enter Loyalty Card Number : ");
		scanf("%ld",&loyal);
		
		FILE *sptr;
		sptr = fopen("loyalty.dat","r+");
		
		if(sptr==0)
		{
			printf("Error");
			return -1;
		}
		
		fscanf(sptr,"%ld%s",&l,&n);
		
		while(!feof(sptr))
		{
			
			if(loyal == l)
			{
				status = 1; 
			}
			
			fscanf(sptr,"%ld%s",&l,&n);
		}
		
		fclose(sptr);
		
		if(status ==0)
		{
			FILE *fptr;
			fptr = fopen("loyalty.dat","a");
		
			if(fptr==0)
			{
				printf("Error");
				return -1;
			}
		
			fprintf(fptr,"\n%ld %s",loyal,name);
			
			fclose(fptr);
		}
		
	}
	

	
	return 0;
}
