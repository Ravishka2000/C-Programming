#include <stdio.h>
#include <string.h>

int main(void) 
{

  int i;
  float dtot =0, wtot=0, max = 0, min = 99999;
  char maxnm[30], mixnm[30];

  struct Details
  {
    int accNo;
    char name[30];
    char type;
    float amount;
  }customer[5];

  customer[0].accNo = 8254;
  strcpy(customer[0].name,"Viraj");
  customer[0].type = 'D';
  customer[0].amount = 500;

  customer[1].accNo = 1267;
  strcpy(customer[1].name,"Sudesh");
  customer[1].type = 'D';
  customer[1].amount = 1000;

  customer[2].accNo = 7823;
  strcpy(customer[2].name,"Ama");
  customer[2].type = 'W';
  customer[2].amount = 350;

  customer[3].accNo = 9023;
  strcpy(customer[3].name,"Danuli");
  customer[3].type = 'w';
  customer[3].amount = 250;

  customer[4].accNo = 4587;
  strcpy(customer[4].name,"Hiran");
  customer[4].type = 'D';
  customer[4].amount = 750;

  for(i=0;i<5;++i)
  {
    if((customer[i].type == 'W') || (customer[i].type == 'w'))
    {
      wtot +=customer[i].amount;

      if(customer[i].amount < min)
      {
        min = customer[i].amount;
        strcpy(mixnm,customer[i].name);
      }
    }
    else
    {
      dtot +=customer[i].amount;

      if(customer[i].amount > max)
      {
        max = customer[i].amount;
        strcpy(maxnm,customer[i].name);
      }
    }
  }

  printf("Total Deposit Amount : %.2f",dtot);
  printf("\nTotal Withdrawal Amount : %.2f",wtot);
  printf("\nName of the customer with the maximum Deposit Amount : %s",maxnm);
  printf("\nName of the customer with the minimum Withdraw Amount : %s",mixnm);

  
  return 0;
}