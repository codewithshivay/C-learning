#include <stdio.h>
int main()
{
  double a;

  printf("Enter a Number");

  scanf("%LF",&a);

  printf("the value is %LF",a);
  //compile time stack smashing detected*****

  return 0;
}

