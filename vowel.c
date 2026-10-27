#include<conio.h>
 int main() 
{
  char c;
  printf("\n Enter character:");
  scanf("%c",&c);
  if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  {
   printf("\n %c is vowel",c);
  }
  else
  {
   printf("\n %c is not a vowel",c);
  }
}
    