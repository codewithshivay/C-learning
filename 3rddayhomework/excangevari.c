#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter a Numbers\n a = ");
  scanf("%d",&a);
  printf("and\n b = ");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("a = %d b = %d",a,b);

return 0;
}
