#include <stdio.h>
int main(){
    float basic, da_per, hra_per, da, hra, gross,net;

    printf("Enter the basic pay: ");
    scanf("%f", &basic);
    printf("Enter the DA percentage: ");
    scanf("%f", &da_per);
    printf("Enter the HRA percentage: ");
    scanf("%f", &hra_per);

    da = (basic * da_per) / 100;
    hra = (basic * hra_per) / 100;

    gross = basic + da + hra;

    printf("Gross salary is: %f and net salary is %f", gross,gross);
    return 0;
}
