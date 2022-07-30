//Write a C program to count total number of negative elements in an array
#include <stdio.h>

int main()
{
    int a[10],i,count=0;
    printf("Enter a Number\n");
    for(i=0; i<10; i++)
      scanf("%d",&a[i]);
    for(i=0; i<10; i++)
      {
          if(a[i] < 0)
            count++;
      }
       printf("\nThe total negative number in array element is : %d",count);

    return 0;
}
