// Write program to count frequency of each element in an array
#include <stdio.h>

int valueinarray(int val, int arr[])
{
    int i;
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i] == val)
            return 1;
    }
    return 0;
}

int main()
{
    int a[6],b[6],i,j,c=0;
    printf("Enter array element\n");

    for(i=0; i<6; i++)
     scanf("%d",&a[i]);

    printf("%d", valueinarray(2, a));

    /*or(i=0; i<6; i++)
      b[i] = a[i];

    for(i=0; i<6; i++)
     {
       for(j=0; i<6; j++)
        {
         if(a[i] == b[j])
           c++;
        }
      printf("\n%d is %d times",a[i],c);
       c=0;
     }
    */
    return 0;
}
