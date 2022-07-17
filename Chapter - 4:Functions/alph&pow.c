#include <stdio.h>

int main() {
    char key;
    printf("Press any key\n");
    scanf("%c",&key);
     key>=65 && key<=90 || key>=97 && key<=122 ? printf("Alphabate") : printf("Not Alphabate");

    return 0;
}


// power of any number
#include <stdio.h>
#include <math.h>
int pou(int base, int power)
{
    return(pow(base,power));
}

int main()
{
    int power,base;
    printf("Enter base :");
    scanf("%d",&base);
    printf("Enter power :");
    scanf("%d",&power);
    printf("the power is :%d",pou(base , power));
}
