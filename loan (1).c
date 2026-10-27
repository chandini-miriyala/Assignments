#include<conio.h>
 int main() 
{
  int age,credit_score;
  float income ;
  printf("Enter age:");
  scanf("%d",&age);
  printf("Enter monthly income:");
  scanf("%f",&income);
  printf("Enter credit_score:");
  scanf("%d",&credit_score);
  if(age<21 || age>60)
  {
  printf("\nLoan rejected:age not eligible in 21 to 60");
  }
  else if(income <25000)
  {
   printf("\nLoan rejected: low income");
  }
  else if(credit_score<700)
  {
   printf("\nLoan rejected:low credit_score");
  }
   else
   {
    printf("\nLoan approved");
   }
}