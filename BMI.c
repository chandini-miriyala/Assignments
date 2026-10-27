#include<conio.h>
 int main() 
{
  float weight,height,BMI;
  printf("Enter weight in kg:");
  scanf("%f",&weight);
  printf("Enter height in meters:");
  scanf("%f",&height);
  BMI=weight/( height * height) ;
  printf("\n BMI=%.2f",BMI);
  if(BMI <18.5)
  {
   printf("Underweight");
  }
  else if(BMI <25)
  {
   printf("Normal");
  }
  else if (BMI < 30)
  {
   printf("Over weight");
  }
  else
  {
   printf("obese");
  }
}
    