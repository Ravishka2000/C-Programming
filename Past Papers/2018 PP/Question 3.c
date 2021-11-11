#include <stdio.h>
#include <assert.h>

float calDiscount(int time, float totAmount);
void testCalDiscount();
void displayGift(float finalTot);

int main() 
{
  int ptime;
  float amount,tot=0;

  testCalDiscount();
  
  printf("Enter Total Amount : ");
  scanf("%f",&amount);
  printf("Enter Time : ");
  scanf("%d",&ptime);

  tot = amount - calDiscount(ptime, amount);

  printf("Final amount after discount : %.2f",tot);
  displayGift(tot);
  
  
  return 0;
}


float calDiscount(int time, float totAmount)
{

  float discount;

  switch(time)
  {
    case 16 :
    case 17 :
    case 18 : if (totAmount>=5000)
              {
                discount = totAmount*10/100.0;
              }
              else if(totAmount>=2500)
              {
                discount = totAmount*7/100.0;
              }
              break;

    case 20 :
    case 21 : if (totAmount>=5000)
              {
                discount = totAmount*12/100.0;
              }
              else if(totAmount>=2500)
              {
                discount = totAmount*9/100.0;
              }
              break; 
    default : printf("Invalid time");                   
  }

  return discount;
}

void testCalDiscount()
{
  assert(calDiscount(16, 10000)==1000);
  assert(calDiscount(21, 10000)==1200);
}

void displayGift(float finalTot)
{
  if(finalTot>=7000)
  {
    printf("\n<<< You won a free Packet of Milk >>>");
  }
  else if(finalTot>=5000)
  {
    printf("\n<<< You won a free 1kg of Sugar >>>");
  }
  else if(finalTot>=3000)
  {
    printf("\n<<< You won a free pack of 6 Eggs >>>");
  }
}