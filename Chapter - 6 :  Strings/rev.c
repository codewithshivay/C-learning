/*#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    int len;
    printf("Enter your Name : ");
    scanf("%s",s);
    len = strlen(s);
    printf("the lenght of %s is %d",s,len);

    return 0;
}*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    printf("Enter your Name : ");
    scanf("%s",s);
    strrev(s);
    printf("%s",s);

    return 0;
}
