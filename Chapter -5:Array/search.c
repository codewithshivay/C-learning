//program to search an element in an array...!!
#include <stdio.h>
int main()
{
    int a[10]={12,3,4,6,8,32,98,34,11,10};
    int i,n,c=0;
    printf("Enter a element to know is present or not : ");
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        if(a[i] == n)
         c++;
    }
    if(c > 0)
      printf("Element is present");
    else
      printf("Not present");

    return 0;
}
