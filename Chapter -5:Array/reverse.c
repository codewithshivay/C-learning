//program to find reverse of an array..!!
#include <stdio.h>
int main()
{
    int a[]={2,3,4,5,6},i,j;
    printf("\nArray : ");
    for(i=0; i<5; i++)
       printf(" %d ",a[i]);

    printf("\nArray in reverse order: ");
    for(i = 5-1; i>=0; i--)
    {
        printf(" %d ", a[i]);
    }

    return 0;
}
//  2,3,4,5,6
//  6,5,4,3,2+
