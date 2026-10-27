#include<conio.h>
int main()
{
  int user_id,password;
  int stored_id=101;
  int stored_password=4321;
  printf("Enter user_id,password:");
  scanf("%d%d",&user_id,&password);
  if(user_id !=stored_id)
  {
   printf("\nuser not found");
  }
  else if(password==stored_password)
  {
   printf("\n logic successful");
  }
  else
  {
   printf("\nincorrect password");
  }
}