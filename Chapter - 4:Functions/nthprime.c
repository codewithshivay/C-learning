#include <stdio.h>
int nth(int);
int is_prime(int a)
{
    for(int i=2; i<=a/2; i++)
       {
          if(a % i == 0)
            return 1;
       }
     return 0;
}
int nth(int a)
{
     int i=2;
     while(a > 0)
     {
         if(is_prime(i) == 1)
        {
            a--;
        }
      i = i + 1;

    }

     return i;
}

int main()
{
    printf("%d",nth(1));

    return 0;
}
