#include <stdio.h>
#include <string.h>
int main()
{
 int choice,sum=0;
 printf("\n\n*********Enter Your choice from below list*********");
 printf("\n1.Ice Cream      -------> 20");
 printf("\n2.Vanilla        -------> 30");
 printf("\n3.Chocolate      -------> 40");
 printf("\n4.Cookies N cream-------> 50");
 printf("\n5.Buttered Pecan -------> 60");
 printf("\n6.Cookie Dough   -------> 70");
 printf("\n7.Strawberry     -------> 100\n\n");
 scanf("%d",&choice);
 switch(choice){
  case 1:
    sum = sum + 20;
    break;
  case 2:
    sum = sum + 30;
    break;
  case 3:
    sum = sum + 50;
    break;
  case 4:
    sum = sum + 60;
    break;
  case 5:
    sum = sum + 70;
    break;
  case 6:
    sum = sum + 80;
    break;
  case 7:
    sum = sum + 100;
    break;
  default :
    printf("Invalid Choice\n");
   }
   printf("total is = %d, for %s",sum);

 return 0;
}
