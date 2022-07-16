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
   printf("\n1.Addition \n2.Substraction \n3.Multiplication \n4.Division\n\n");
   printf("\nEnter your Choice\n");
   scanf("%d",&choice);
   if(choice<=5)
  {
    if(choice == 5)
    {
      printf("Please select right Choice");
      break;
    }
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

 } while(1);

}
