#include <stdio.h>
int main()
{
  float fah,centi;
  printf("Enter temperature in Centigrade\n");
  scanf("%f",&centi);
  fah = (centi * 9 / 5) + 32 ;
  printf("Fahrenheit degree is %f",fah);

return 0;
}
