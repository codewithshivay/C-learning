//calculate the formula (a-b)2
#include <stdio.h>
int main()
{
  int a,b,result;
  printf("Enter two Numbers\n");
  scanf("%d%d",&a,&b);
  result = a * a + b * b - 2 * a * b;
  printf("the result is %d",result);

return 0;
}
