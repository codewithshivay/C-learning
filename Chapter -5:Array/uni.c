//Unique array element program..
#include <stdio.h>
int Is_present(int a, int b[])
 {
     int i;
    for(i=0; i<10; i++)
    {
        if(b[i] == a)
        {
          return 1;
        }
    }
    return 0;
}

int main()
{
    int b[]={2,2,3,4,4,6,7,7,8,7},c[100];
    int i,j=0;
    for(i=0; i<10; i++)
    {
       if(Is_present(b[i],c)==0)
       {
          c[j] = b[i];
          j++;
       }
    }
    printf("The unique Element is : ");
    for(j=0; j<sizeof(c[j]); j++)
      printf("\n%d",c[j]);

    return 0;
}
