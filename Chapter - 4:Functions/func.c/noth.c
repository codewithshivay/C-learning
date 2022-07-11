//takes nothing returns nothing
#include <stdio.h>
void is_even(int a) //formal argument
{
  int x;

    if(a%2==0)
      printf("Even Number");
    else
      printf("Odd Number");

}
                                                /* void is_even(int); global decleration */
 void main()
{
  int a;
 void is_even(int); // Local decleration
  printf("Enter a Number");
  scanf("%d",&a);
  void is_even(a); /* Actual argument | call by passing value */
}
