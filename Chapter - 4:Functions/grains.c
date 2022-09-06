/*There are 64 squares on a chessboard (where square 1 has one grain, square 2 has two grains, and so on)*/
#include <math.h>
#include <stdio.h>
int square(int);
int square(int a)
{
    int i,base=2;
    for(i=1; i<a; i++);
        i--;
     return pow(base , i);
}

int main()
{
    printf("%d",square(5));
    return 0;
}
