#include<conio.h>
 int main() 
{
  float length,width,area,perimeter;
  printf("Enter length and width:");
  scanf("%f%f",&length,&width);
  area=length * width;
  perimeter =2 *(length + width);
  printf("\nArea=%.2f",area);
  printf("\nperimeter=%.2f",perimeter);
}