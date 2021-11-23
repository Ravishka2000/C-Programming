#include <stdio.h>

int main() 
{
  struct Product
  {
    int productID;
    char name[30];
    float unitPrice;
    int quantity;
  }pro[4];

  float amount[4],tot=0;

  for(int i=0;i<4;++i)
  {
    printf("Enter Product Id : ");
    scanf("%d",&pro[i].productID);

    printf("Enter Product name : ");
    scanf("%s",pro[i].name);

    printf("Enter Unit Price : ");
    scanf("%f",&pro[i].unitPrice);

    printf("Enter Quantity : ");
    scanf("%d",&pro[i].quantity);

    puts("");
  }  
  
  printf("\n\nProduct Id\tName\tAmount\n");

  for(int i=0;i<4;++i)
  {
    amount[i] = pro[i].unitPrice*pro[i].quantity;

    printf("%d\t\t\t%s\t\t%.2f\n",pro[i].productID,pro[i].name,amount[i]);

    tot += amount[i];
  }

  printf("\t\t\tTotal : %.2f",tot);
  
  return 0;
  
}
