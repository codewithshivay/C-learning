//#include "difference_of_squares.h"
#include <stdio.h>
int square_of_sum(int);
int difference_of_squares(int);
int sum_of_squares(int);
int square_of_sum(int a)
{
    int i,s=0;
    for(i=1; i<=a; i++)
    {
        s = s + i;
    }
    return s*s;
}

int sum_of_squares(int a)
{
    int i,s=0,t;
    for(i=1; i<=a; i++)
    {
        t = i * i;
        s = s + t;
    }
    return s;
}
int difference_of_squares(int a)
{
    int t;
   t = square_of_sum(a) - sum_of_squares(a);
   return t;
}
int main()
{
    printf("%d",difference_of_squares(5));

    return 0;
}
