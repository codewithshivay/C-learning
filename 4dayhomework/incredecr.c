#include <stdio.h>

int main()
{
   int a=6 , b=4;
   b = ++a - b-- * ++b /a-- ;
   printf("%d\n%d",a,b);

    return 0;
}
