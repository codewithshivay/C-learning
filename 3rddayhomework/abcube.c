//calculate the formula (a+b)3
#include <stdio.h>
int main()
{
  int a,b,result;
  printf("Enter two Numbers\n");
  scanf("%d%d",&a,&b);
  result = a * a * a + b * b * b + 3 * a * b * (a+b);
  printf("the result is %d",result);

return 0;
}
