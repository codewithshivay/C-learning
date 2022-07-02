#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,result;
  printf("Enter a Number\n");
  scanf("%d",&a);
  printf("Enter a power\n");
  scanf("%d",&b);
  result = pow (a,b);
  printf("The power is %d",result);

return 0;
}
