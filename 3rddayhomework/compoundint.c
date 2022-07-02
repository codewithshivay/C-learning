//Calculate Commpound Interest
#include <stdio.h>
#include <math.h>
int main()
{
  double principal,rate,time,num,amount;
  printf("Enter initial principal balance\n");
  scanf("%lf",&principal);
  printf("Enter interest rate\n");
  scanf("%lf",&rate);
  printf("Enter number of time periods elapsed\n");
  scanf("%lf",&time);
  printf("Enter a number of times interest applied per time period");
  scanf("%lf",&num);
  amount = principal * pow((1 + (rate/num)), (num * time));
  printf("CI is %lf",amount);

return 0;
}
