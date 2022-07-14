#include <stdio.h>

int is_prime(int a)
{
  int i,b=0;
   for(i=2; i<=a/2; i++)
     {
       if(a%i == 0)
         b = 1;
     }

     return b;
}


int main()
{
  int a,s;
  printf("Enter a Number\n");
  scanf("%d",&a);
  s=is_prime(a);
  if(s==1){
   printf("%d is Not Prime\n", a);
   while(1)
   {
     int r;
     a++;
     r = is_prime(a);
     if(r == 0)
     {
       printf("%d is next prime", a);
       break;
     }
   }
   }
  else
   printf("prime");

}

