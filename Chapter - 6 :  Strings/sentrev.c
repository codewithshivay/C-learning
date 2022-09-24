#include <stdio.h>
#include <string.h>

int rev(char str[])
{
    int i,len;
    len = strlen(str);
    for(i=len-1; i>=0; i--)
    {
        if(str[i] == ' ')
        {
          str[i] = '\0';
          printf("%s ",&(str[i])+1);
        }
    }
    //printf("%s",str);
}

int main()
{
    char arr[]=" my name shivam so its chotu";
    rev(arr);
}
