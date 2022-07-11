//takes nothing returns something
#include <stdio.h>
#include<stdbool.h>
bool is_even(int x)
{
  return (x % 2 == 0);
}

 void main()
{
  int x;
  printf("Enter a Number");
  scanf("%d", &x);
  if(is_even(x))
    printf("even");
  else
    printf("odd");
}
