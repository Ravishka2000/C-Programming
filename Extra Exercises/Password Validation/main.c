#include <stdio.h>
#include <string.h>

int main(void) 
{
  char pswd[20];
  int length,valid=0,up=0,low=0,spe=0,num=0;

  printf("Enter Password : ");
  scanf("%s",pswd);

  length = strlen(pswd);

  if(length >= 10)
  {
    valid =1;
  }

  for(int i=0;i<length;++i)
  {
    if((pswd[i]>=65) && (pswd[i]<=90))
    {
      ++up;
    }
    else if((pswd[i]>=97) && (pswd[i]<=122))
    {
      ++low;
    }
    else if((pswd[i]>=48) && (pswd[i]<=57))
    {
      ++num;
    }
    else if((pswd[i]=='@') || (pswd[i]=='&') || (pswd[i]=='$'))
    {
      ++spe;
    }

  }

  if((valid==1) && (up>=1) && (low>=1) && (num>=1) && (spe>=1))
  {
    printf("Valid");
  }
  else
  {
    printf("Invalid");
  }

  return 0;
}
