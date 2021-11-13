#include <stdio.h>
#include <assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

int main()
{
	float inAmount,inRate,total = 0;
	int i;
	
	testTotalAmount();
	
	printf("Enter Amount to be invested : ");
	scanf("%f",&inAmount);
	
	printf("Enter Annual Interest Rate : ");
	scanf("%f",&inRate);
	
	total = findTotalAmount(inRate,inAmount);
	
	for(i=0;i<5;++i)
	{
		
		printf("Amount after Year %d : %.2f\n",i+1,total);
		total = findTotalAmount(inRate,total);
	}
	
	return 0;
}

float calcAnnualInterest(float interestRate, float amount)
{
	
	if(amount > 1000000)
	{
		return amount * (interestRate + 0.5)/100.0;
	}
	else
	{
		return amount * interestRate/100.0;
	}
}

float findTotalAmount(float interestRate, float amount)
{
	float tot=0;
	
	tot += calcAnnualInterest(interestRate, amount) + amount;
	
	return tot;
}

void testTotalAmount()
{
	assert(calcAnnualInterest(10,10000)==1000);
	assert(findTotalAmount(10,10000)==11000);
}
