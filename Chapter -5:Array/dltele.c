//Write program to delete an element from an array at specified position
#include <stdio.h>

int main()
{
    int a[5],i,pos;
    printf("Enter a array element : ");
        for(i=0; i<5; i++)
            scanf("%d",&a[i]);

    printf("Enter a position to dlt a element : ");
       scanf("%d",&pos);

        for(i=0; i<5; i++)
          if(a[pos] == a[i])
              a[i] = 0;

        for(i=0; i<5; i++)
          printf("%d ",a[i]);

    return 0;
}
