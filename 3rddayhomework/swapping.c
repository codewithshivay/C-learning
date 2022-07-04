#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter a Numbers\n a = ");
  scanf("%d",&a);
  printf("and\n b = ");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a = %d b = %d",a,b);

return 0;
}
