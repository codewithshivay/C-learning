//Write a C program to find sum of even odd element in an array
#include <stdio.h>

int main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter ten even or add Number for sum\n");
    for(i=0; i<10; i++)
      scanf("%d",&a[i]);
    for(i=0; i<10; i++)
      {
          if(a[i] % 2 == 0)
            even = even + a[i];
          if(a[i] % 2 == 1)
            odd = odd + a[i];
      }
       printf("\nThe sum of even number is : %d",even);
       printf("\nThe sum of odd number is : %d",odd);

    return 0;
}
