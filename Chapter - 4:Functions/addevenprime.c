#include <stdio.h>
add()
{
  int x,y;
  printf("Enter two Number\n");
  scanf("%d%d",&x,&y);
  printf("The sum of %d and %d is %d",x,y,x+y);
}
is_even()
{
  int x;
  printf("\n\n\nEnter a Number to check Even or add\n");
  scanf("%d",x);
  if(x%2==0)
    printf("Even Number");
  else
    printf("Odd Number");

}
is_prime()
{
  int y,i,a=0;
  printf("Enter a Number to check prime");
  scanf("%d",&y);
          for(i=1;i<=y;i++)
     {
           if(y%i==0){
            a++;
         }
    }
    if(a == 2)
        printf("Prime Number");
    else
        printf("is not prime");

}
  int main()
  {
    add();
    is_even();
    is_prime();
  }
