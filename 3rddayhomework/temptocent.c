#include <stdio.h>
int main()
{
  float centigrade,temp;
  printf("Enter Centigrade\n");
  scanf("%f",&centigrade);
  temp = (centigrade * 9 / 5) + 32;
  printf("Fahrenheit is  %f",temp);
return 0;
}
