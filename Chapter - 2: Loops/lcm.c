// Write a program to calculate LCM of two numbers
#include <stdio.h>

int main()
{
    int a,b,lcm;
    printf("Enter a Number to calculte LCM\n");
    scanf("%d%d",&a,&b);
    lcm = (a > b) ? a : b;
    while(1)
    {
        if(lcm % a == 0 && lcm % b ==0)
        {
            printf("the LCM of %d and %d is %d",a,b,lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
//GCD (a, b) = (a × b)/ LCM (a, b)
//LCM (a, b) = (a * b)/ GCD (a, b)
