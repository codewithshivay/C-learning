#include <stdio.h>
int main() {

     int a[5],i,multi=1;
     printf("Enter 5 Number\n");
    for(i=0; i<=4; i++)
     {
       scanf("%d",&a[i] );
     }
       for(i=0; i<=4; i++)
        {
           multi=multi*a[i];
        }
         printf("%d ",multi);

    return 0;
}
