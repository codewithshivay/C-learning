
#include <stdio.h>

int main()
{
    int a=8 , b=6;
    a = ++a - b-- * ++b /a-- + b++ / a--  ;

    printf("%d\n%d",a,b);

    return 0;
}
