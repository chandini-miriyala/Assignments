#include<conio.h>
 int main() 
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n>0)
  {
   printf("\n positive ");
  }
  else if(n<0)
  {
  printf("\n negative");
  }
  else
  {
  printf("\n Zero");
  }
}