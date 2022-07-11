#include <stdio.h>
 float AOC()
{
  float Radius , Area;
  printf("Enter Radius\n");
  scanf("%f",&Radius);
  Area = 3.14 * Radius * 2;
  printf("The Area of circle is : %f",Area);
}
  float main()
  {
    AOC();
  }
