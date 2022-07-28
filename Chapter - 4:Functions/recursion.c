#include <stdio.h>

int natural(int a)
{
    int s;
      if(a==1)
       return (a);
       s = a + (natural(a-1));
       return s;
}

int main()
{
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);
    a = natural(a);
    printf("the sum is : %d",a);

}
