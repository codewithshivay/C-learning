#include <stdio.h>
int main()
{
    int x;
    printf("Enter Your Number");
    scanf("%d",&x);
    if(x>=60){
       printf("Your pass in 1st division");
    }
          else
            {
              if(x>=45)
                printf("Your are passs in 2nd divisioin");
              else
               if(x>=33)
                 printf("Third division");
                else
                   printf("your are fail");

            }

    return 0;
}
