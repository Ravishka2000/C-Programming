#include <stdio.h>

int main()
{
  int i,j,no,att,emNo,at[7],emp,ate=0,status=0;
  char nme[30],name[30];	
	
  FILE *ptr;

  ptr = fopen("attendance.dat","w");

  for(i=1;i<=2;++i)
  {
    printf("Enter Emp No : ");
    scanf("%d", &no);
    printf("Enter Name : ");
    scanf("%s", &nme);

    fprintf(ptr,"%d %s ",no,nme);

    for(j=1;j<=7;++j)
    {
      printf("Mark the attendance : ");
      scanf("%d", &att);

      fprintf(ptr,"%d ",att);
    }
    
    puts("");
  }

  fclose(ptr); 
  
  printf("Enter Employee Number : ");
  scanf("%d",&emNo);
  
  FILE *sptr;

  sptr = fopen("attendance.dat","r");
  
  fscanf(sptr,"%d%s", &emp,name);
  
  while(!feof(sptr))
  {
  	for(i=0;i<7;++i)
    {
      fscanf(sptr," %d", &at[i]);	
    }
	
  	if(emp == emNo)
  	{
  		status = 1;
  		break;
	  }
	
	  fscanf(sptr,"%d%s", &emp,name);
  }
  
  for(i=0;i<7;++i)
  {
  	if(at[i]== 1)
  	{
  		++ate;
  	}
  }
	
  printf("\nTotal Attendance : %d",ate);
  
  fclose(sptr);	
  return 0;
}