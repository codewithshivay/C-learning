//Write a C program to count total number of even and odd element in array
#include <stdio.h>

int main()
{
    int a[10],i,count=0,oc=0;
    printf("Enter ten even or add Number for count how much it is\n");
    for(i=0; i<10; i++)
      scanf("%d",&a[i]);
    for(i=0; i<10; i++)
      {
          if(a[i] % 2 == 0)
            count++;
          if(a[i] % 2 == 1)
            oc++;
      }
       printf("\nThe total of even number in array is : %d",count);
       printf("\nThe total of odd number in array is  : %d",oc);

    return 0;
}
