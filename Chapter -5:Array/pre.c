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


    return 0;
}
