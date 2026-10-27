#include<conio.h>
 int main() 
{
  float amount,final_amount,discount=0;
  printf("Enter order amount:");
  scanf("%f",&amount);
  if(amount > 10000)
  {
   discount =amount * 0.20;
  }
  else if (amount > 5000)
  {
   discount = amount * 0.10;
  }
  else
  {
   discount =0;
  }
  final_amount=amount - discount ;
  printf("\n Discount=%.2f",discount);
  printf("\nFinal payable amount=%.2f",final_amount);
}