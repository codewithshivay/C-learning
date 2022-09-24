//Reverseing the words of string..
#include <stdio.h>
#include <string.h>
int word_rev(char *str)
{
    int arr[20],i,j=0;
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
          arr[j] = str[i];
           j++;
          printf("%c",arr[i]);
        }
        else
          j++;
    }
    printf("\n");
    for(i = 17-1; i>=0; i--)
    {
      printf("%c", arr[i]);
    }
}

void main()
{
    char str[20]="my name is shivam";
    word_rev(str);
}
