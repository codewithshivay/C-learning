#include <stdio.h>
int main()
{
int n,i,a=0;
printf("Enter a Number\n");
scanf("%d",&n);
  for(i=1;i<=n;i++)
{
     if(n%i==0){
         a++;
     }
}
    if(a == 2)
        printf("Prime Number");
    else
        printf("is not prime");


return 0;
}


// Write a program to check whether a given number is a Prime number or not
#include <stdio.h>

int main()
{
    int n,i=2,s=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(i <= n/2)
    {
        if(n % i == 0){
            s++;
        }
        i++;
    }

    if(s==0)
       printf("prime");
    else
       printf("not prime");

    return 0;
}
