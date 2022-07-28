/* Write a program to check whether a given number is a three digit number or not*/
#include <stdio.h>

int main() {
    int i,n,c=0,s;
    printf("Enter a Number\n");
    scanf("%d",&n);

    for(i=1; i<=10; i++)
        {
            s=n%10;
            c++;
            n=n/10;
            if(n==0)
              break;
        }

           if(c==3)
             printf("three digit number");
           else
             printf("this is not three digit number");

    return 0;
}
