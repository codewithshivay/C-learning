// find miximum number of three number
#include <stdio.h>
int main()
{
    int a,b,c,maxi;
    printf("Enter three Number : ");
    scanf("%d%d%d",&a,&b,&c);
    maxi = (a>b)?((a>c)?a:c) : ((b>c)?b:c);
    printf("Maximum number is %d",maxi);

    return 0;
}
