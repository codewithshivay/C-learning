#include <stdio.h>
#include <math.h>

int power(int base, int power)
{
  int i, m = 1;
  for(i=1; i<=power; i++)
  {
   m = m * base;
  }
  return m;
}
int is_armstrong_number(int n)
{
  int c =0, temp, sum = 0;
  temp = n;
  while(temp != 0)
  {
    temp = temp/10;
    c++;
  }

  while(n != 0)
  {
    sum = sum + power(n % 10, c);
    n = n/10;
  }

  return sum;
}

int main()
{
   int n,temp;
    printf("Enter a Number : ");
    scanf("%d",&n);
     temp = is_armstrong_number(n);
    if(temp == n)
       printf("Armstrong Number");
    else
       printf("Not Armstrong");

  return 0;
}
