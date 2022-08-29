//program to put even and odd elements of array in two separate array..!!
#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},e[10],o[10],i;
     for(i=0; i<10; i++)
     {
         if(a[i] % 2 == 0)
           {
           e[i] = a[i];
           }
        else
          {
             o[i] = a[i];
          }
     }
     printf("Odd Number : ");
     for(i=0; i<10; i++)
        printf("%d  ",o[i]);

    printf("\nEven Number : ");
    for(i=0; i<10; i++)
        printf("%d  ",e[i]);

    return 0;
}+
