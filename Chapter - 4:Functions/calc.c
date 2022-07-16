#include <stdio.h>
int add(int a , int b)
{
  return(a+b);
}
int sub(int a , int b)
{
 return (a-b);
}
int multi(int a , int b)
{
  return (a*b);
}
int divi(int a , int b)
{
  return (a/b);
}

int main()
{
   int a,b,choice;
  do
 {
   printf("\n\nEnter your Choice");
   printf("\n1.Addition \n2.Substraction \n3.Multiplication \n4.Division\n");
   scanf("%d",&choice);
   if(choice<=5)
  {
    printf("Enter two Number\n");
    scanf("%d%d",&a,&b);
     switch(choice)
      {
       case 1:
        printf("%d",add(a,b));
        break;
       case 2:
        printf("%d",sub(a,b));
        break;
       case 3:
        printf("%d",multi(a,b));
        break;
       case 4:
        printf("%d",divi(a,b));
        break;
     }
  }
  else
  {
      printf("Please select right Choice");
      break;
  }

 } while(1);

}
