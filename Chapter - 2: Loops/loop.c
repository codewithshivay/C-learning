//Program to print a table
/*#include <stdio.h>
int main()
{
 int num,i,j;
 printf("Enter a Number to print table\n");
 scanf("%d",&num);
  for(i=1; i<=10 ; i++)
   {
       j=num*i;
       printf("%d\n",j);
   }

return 0;
}

//Program to print sum of natural number
#include <stdio.h>
int main()
{
  int i,j=0,num;
  printf("Enter a Number\n");
  scanf("%d",&num);
   for(i=1; i<=num; i++)
       j=j+i;

    printf("the sum of of first %d Number is : %d\n",num,j);

return 0;
}*/

//Program to print sum of even number
#include <stdio.h>
int main()
{
  int i,num,j=0;
  printf("Enter a Number\n");
  scanf("%d",&num);
  for(i=2; i<=num; i=i+2)
      j=j+i;

  printf("the sum of first %d even number is : %d",num,j);

return 0;
}
