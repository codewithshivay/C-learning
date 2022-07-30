//Write a C program to insert an element in an array
#include <stdio.h>

int main()
{
    int a[5],i,in,pos;
    printf("Enter a array element : ");
        for(i=0; i<5; i++)
            scanf("%d",&a[i]);

    printf("Enter a element to insert : ");
       scanf("%d",&in);
    printf("Enter a position to insert a element : ");
       scanf("%d",&pos);
         a[pos] = in;
        for(i=0; i<5; i++)
          printf("%d ",a[i]);

    return 0;
}+
