// find miximum number of three number
#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three Number");
    scanf("%d%d%d",&a,&b,&c);
    max = (a>b)?((a>c)?a:c) : ((b>c)?b:c);
    printf("Maximum number is %d",max);

    return 0;
}
