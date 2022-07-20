//Write a C program to find maximum element in an array.
#include <stdio.h>
int main()
{
  int a[10],i,max;
   printf("Enter 10 array element\n");

   for(i=0; i<10; i++)
    {
      scanf("%d",&a[i]);
    }
     max=a[0];
     for(i=0; i<10; i++)
       {
          if(max < a[i])
           max=a[i];
         //  i=i+1;
       }

       printf("maximum element is %d",max);

   return 0;
}
