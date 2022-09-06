#include <stdio.h>
int square_root(int);
int square_root(int a)
{
    int i;
    for(i=0; i<=a; i++)
    {
        if(i*i == a)
          return i;
    }
}

int main()
{
    printf("%d",square_root(81));

    return 0;
}

/*25    5
 81     9
 4      2 */
