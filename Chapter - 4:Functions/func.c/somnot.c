//takes something returns nothing
#include <stdio.h>
void is_even()
{
  int x;
  printf("Enter a Number\n");
  scanf("%d",&x);
    if(x%2==0)
      printf("Even Number");
    else
      printf("Odd Number");

}
 void main()
{
  void is_even(void);  //function decleration
  is_even();
}

