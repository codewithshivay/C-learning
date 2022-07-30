//Write a C program to copy all elements from an array to another array
#include <stdio.h>

int main()
{
    int a[5],b[5],i;
    printf("Enter a array element\n");
    for(i=0; i<5; i++)
      scanf("%d",&a[i]);

    for(i=0; i<5; i++)
        b[i] = a[i];

    printf("First array element is : ");
    for(i=0; i<5; i++)
       printf("%d ",a[i]);

    printf("\nCopy array form another array is : ");
    for(i=0; i<5; i++)
      printf("%d ",b[i]);

    return 0;
}
