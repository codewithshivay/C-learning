//program to left rotate an array
#include <stdio.h>

int main()
{
    int a[10];
    int i,temp;
    printf("Enter a 10 array element : ");
    for(i=0; i<10; i++)
       scanf("%d",&a[i]);

    temp = a[0];

    for(i=1; i<10; i++)
      printf("%d ",a[i]);
    printf("%d",temp);

    return 0;
}
