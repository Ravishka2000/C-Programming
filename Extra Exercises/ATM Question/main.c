#include <stdio.h>

int main() 
{

  int warning = 2 ;
  float balance,tAmount;
  char type,status = 'y',bank = 'n';

  while((warning != 0) && ((status == 'y') || (status == 'Y')))
  {
    printf("\nInput the Transaction Type (W - withdraw / D - Diposit) : ");
    scanf(" %c",&type);

    switch(type)
    {
      case 'w' :
      case 'W' : printf("You have selected Withdraw Money.");
                 break;

      case 'd' :
      case 'D' : printf("You have selected Deposit Money.");
                 break;   

      default  : printf("!!! Enter a proper character !!!  (%d Chances Left).\n\n",warning);  
                 warning--;
                 continue;                 
    }

    if((bank == 'n') || (bank == 'N'))
    {
      printf("\n\nEnter the Bank Balance : ");
      scanf("%f",&balance);
    }
  
    switch(type)
    {
      case 'w' :
      case 'W' : 
                 printf("\nEnter Withdrawal Amount : ");
                 scanf("%f",&tAmount);

                 balance -= tAmount;

                 if(balance < 0)
                 {
                   balance += tAmount;
                   printf("\nYour Account Balance is Insufficient!!!");
                 }
                 else
                 {
                   printf("\nTransaction Successfull...\nNew Balance is Rs.%.2f\n\n",balance);
                 }
                 break;

      case 'd' :
      case 'D' : 
                 printf("\nEnter Deposit Amount : ");
                 scanf("%f",&tAmount);

                 balance += tAmount;

                 printf("\nTransaction Successfull...\nNew Balance is Rs.%.2f\n\n",balance);
                 break;                  
    }

    printf("\nDo you want to do Another Transaction (Y/N) : ");
    scanf(" %c",&status);

    if((status=='n') || (status =='N'))
    {
      printf("\nThank You Have a Nice Day");
      return -1;
    }

    printf("\n\nDo you want to do next Transaction on the same Bank (Y/N) : ");
    scanf(" %c",&bank);
  
  }  

  return 0;
}
