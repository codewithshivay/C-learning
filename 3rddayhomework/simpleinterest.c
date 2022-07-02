//Calculate Simple Interest
#include <stdio.h>
int main()
{
  float principal,rate,time,si;
  printf("Enter principal\n");
  scanf("%f",&principal);
  printf("Enter Rate\n");
  scanf("%f",&rate);
  printf("Enter Time\n");
  scanf("%f",&time);
  si = principal*rate*time/100;
  printf("The value is %f",si);

return 0;
}
