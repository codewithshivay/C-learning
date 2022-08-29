//program to sort array elements in ascending or descending order..!!
#include <stdio.h>
void sort(int a[],int N)
{
    int i,r,t;
    for(r=0; r<=N-1; r++)
    {
        for(i=0; i<=N-1-r; i++)
         if(a[i] > a[i+1])
         {
             t = a[i];
             a[i] = a[i+1];
             a[i+1] = t;
         }
    }
}
int main()
{
    int a[]={2,5,9,34},i;
      sort(a , 3);
    for(i=0; i<4; i++)
       printf(" %d",a[i]);

  return 0;
}
+
