#include <stdio.h>

int main()
{
	int status =0;
	float htot=0,mtot=0,ftot=0;
	char type;
	
	while(status != 100 && status != -1)
	{
		printf("Enter Cource Type : ");
		scanf(" %c",&type);
		
		switch(type)
		{
			case 'h' :
			case 'H' : htot += 1500;
					   break;
			
			case 'm' :
			case 'M' : mtot +=2000;
					   break;		 
					   
			case 'f' :
			case 'F' : ftot +=2500;
					   break;	
			
			default : printf("Invalid Type : ");	 		     	
		}
		
		++status;
		printf("Wanna Enter Again : ");
		scanf("%d",&status);
	}
	
	printf("\n\nNumber of Student Registerd in Diploma in Hospitality Management : %.0f",htot/1500.0);
	printf("\nTotal Fee Earned : Rs.%.2f",htot);
	
	printf("\n\nNumber of Student Registerd in Diploma in Marketing : %.0f",mtot/2000.0);
	printf("\nTotal Fee Earned : Rs.%.2f",mtot);
	
	printf("\n\nNumber of Student Registerd in Diploma in Finance : %.0f",ftot/2500.0);
	printf("\nTotal Fee Earned : Rs.%.2f",ftot);
	
	return 0;
}
