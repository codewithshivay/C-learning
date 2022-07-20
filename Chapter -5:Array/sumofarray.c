//Write a C program to find sum of all array elements. - using recursion.
#include <stdio.h>
 int main()
 {
   int sum[5],i,s=0;
   printf("Enter a element\n");
   for(i=0; i<5; i++)
    {
       scanf("%d",&sum[i]);
    }
    for(i=0; i<5; i++)
       s=s+sum[i];

    printf("the sum is %d",s);

 }

