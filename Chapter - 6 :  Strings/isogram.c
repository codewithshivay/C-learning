#include <string.h>
int is_isogram(char[]);
int is_isogram(char *s)
{
    int i,j;
    for(i=0; s[i] != '\0'; i++)
    {
        for(j=i+1; s[j]!= '\0'; j++)
        {
            if(s[i] == s[j])
              return 0;
        }
    }
   return 1;
}

int main()
{
    printf("%d",is_isogram("mahesh"));

    return 0;
}
