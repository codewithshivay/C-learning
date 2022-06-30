#include <stdio.h>

int main() {
   int a,b;
   char choice;
   printf("Enter Your Choice \n+\n-\n/\n*\n");
   scanf("%c",&choice);

   printf("Enter two Number\n");
   scanf("%d%d",&a,&b);

   switch(choice){
        case '+':
         printf("Sum of two Number is %d and %d is %d",a,b,a+b);
         break;
        case '-':
         printf("Subtraction of  two Number is %d and %d is %d",a,b,a-b);
         break;
        case '/':
         printf("Dividen of two Number is %d and %d is %d",a,b,a/b);
         break;
        case '*':
         printf("Multiplcation of two Number is %d and %d is %d",a,b,a*b);
         break;
        default:
         printf("Invalid choice");
   }

    return 0;
}
