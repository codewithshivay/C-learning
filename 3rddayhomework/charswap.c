#include <stdio.h>
int main()
{
  char a,b,c;
  printf("Enter two characters seperated by space.\n");
  scanf("%c %c",&a, &b);
  c=a;
  a=b;
  b=c;
  printf("a = %c b = %c",a,b);

return 0;
}
