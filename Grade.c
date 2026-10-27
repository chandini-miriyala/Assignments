#include<conio.h>
 int main() 
{
  int marks;
  printf("Enter marks:");
  scanf("%d",&marks);
  if(marks<0 || marks>100)
  {
   printf("\ninvalid mark");
  }
  else if(marks>=90)
  {
   printf("\n Grade outstanding");
  }
  else if(marks>=80)
  {
   printf("\n Grade excellent");
  }
  else if(marks>=70)
  {
   printf("\n Grade verygood");
  }
  else if(marks>=60)
  {
   printf("\n Grade good");
  }
  else if (marks>=50)
  {
   printf("\n Grade Average");
  }
  else
  {
   printf("Fail");
  }
}
