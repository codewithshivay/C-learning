#include <stdio.h>
int main()
{
  float fah,centi;
  printf("Enter temperature in Fahrenheit");
  scanf("%f",&fah);
  centi = (( fah - 32 ) * 5 ) / 9;
  printf("Fahrenheit degree is %f",centi);

return 0;
}
