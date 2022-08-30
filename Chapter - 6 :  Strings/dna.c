#include <stdio.h>
#include <string.h>

int compute(char[] , char[]);
int compute(char *a , char *b)
{
    if(strlen(a) == strlen(b))
    {
      int i,c=0;
       for(i=0; a[i]!= '\0'; i++)
       {
            if(a[i] != b[i])
             {
                c++;
             }
            else
             {
                break;
             }
        }
         return c;
    }
   else
   {
     return -1;
   }
}

int main()
{
    int t;
    t = compute("AGCT", "CGCT");
    printf("%d",t);

   return 0;
}

//output : 1
