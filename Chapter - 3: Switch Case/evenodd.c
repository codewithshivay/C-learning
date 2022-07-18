// Write a C program to check even or odd using switch case.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    switch(num % 2)
    {
        case 0:
        printf("Even Number");
        break;
        case 1:
        printf("Odd Number");
        break;
    }

    return 0;
}
