#include <stdio.h>
int main()
{
  char a,b;
  printf("Enter two characters seperated by space.\n");
  scanf("%c %c",&a, &b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a = %c b = %c",a,b);

return 0;
}
