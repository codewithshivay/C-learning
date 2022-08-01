/*A policy agent has to inform about the amount a client will get after maturity of the scheme. If the client comes in the age group 18 to 25 then the policy period is 30 years, if the client comes in the age group 25 to 40 then the policy period is 20 years and if the client comes in the age group 40 to 55 then the policy period is 10 years. Policy is not for other age groups. Clients can invest any amount lesser than or equal to 100000 but must be greater than or equal to 10000. Rate of return is 5% using simple interest. Write a program to take age and investment amount. Print the maturity amount a client will get*/

#include <stdio.h>

int main() {
     int age,invest,time,SI,rate=5;
     printf("Enter Your age\n");
     scanf("%d",&age);
     printf("Enter your Investment\n \tNote\nYour investment will  be greater than 10000\n");
     scanf("%d",&invest);
     if(age>=18)
     {
      if(age>=18 && age <=25){
          time = 30;
          SI = invest * rate * time / 100;
        printf("this is  maturity amount you will get : %d",SI);
      }
      else{
          if(age>=26 && age<=40)
          {
            time = 20;
              SI = invest * rate * time / 100;
               printf("this is  maturity amount you will get : %d",SI);
          }
          else{
              if(age>=41 && age<=55){
              time = 10;
               SI = invest * rate * time / 100;
                 printf("this is  maturity amount you will get : %d",SI);
              }
              else
               printf("oyy buddhe panja ladaye kya");
          }

      }
    }
    else{
        printf("Abhi bacha hai jane de");
    }
      return 0;
}
