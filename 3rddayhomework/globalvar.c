#include <stdio.h>
int a;
char b;
float c;
double d;
long double e;
signed long int f;
unsigned short int g;
unsigned char h;
int main()
{
printf("%d\n%c\n%f\n%lf\n%LF\n%ld\n%u\n%c",a,b,c,d,e,f,g,h);

return 0;
}
/* Output
a = 0
b = space
c = space
d = 0.000000
e = 0.000000
f = 0.000000
g = 0
h = 0
*/
