#include <stdio.h>
#include <string.h>
#include <assert.h>

int main()
{
	int x = 0,type,num;
	char size,card,loyal,order;
	float price=0,dis=0,tot=0;
	
	printf("Input Pizza Type : ");
	scanf("%d",&type);
	
	while(type != -1)
	{
		printf("Input Pizza Size : ");
		scanf(" %c",&size);
		
		printf("Input the number of Pizzas : ");
		scanf("%d",&num);
		
		switch(type)
		{
			case 1 : if((size == 'l') || (size == 'L'))
					 {
					 	price += 1720*num;
					 }
					 else if ((size == 'm') || (size == 'M'))
					 {
					 	price += 975*num;
					 }
					 
					 break;
					 
			case 2 : if((size == 'l') || (size == 'L'))
					 {
					 	price += 1820*num;
					 }
					 else if ((size == 'm') || (size == 'M'))
					 {
					 	price += 1000*num;
					 }
					 
					 break;
			
			default : printf("Invalid Type");		 
		}
		
		printf("\nInput Pizza Type : ");
		scanf("%d",&type);
	}
	
	printf("\nAre you Paying by Credit Card ? ");
	scanf(" %c",&card);
	
	printf("Are you a loyalty Customer ? ");
	scanf(" %c",&loyal);
	
	printf("Is this an online Order ? ");
	scanf(" %c",&order);
	
	if((card == 'y') || (card == 'Y'))
	{
		dis = price * 20.0/100;
	}
	else if((loyal == 'y') || (loyal == 'Y'))
	{
		dis = price * 15.0/100;
	}
	else if((order == 'y') || (order == 'Y'))
	{
		dis = price * 5.0/100;
	}
	else
	{
		dis = 0;
	}
	
	tot = price - dis;
	
	printf("\nTotal = %.2f",price);
	printf("\nDiscount = %.2f",dis);
	printf("\nNet Amount = %.2f",tot);
	
	return 0;
}
