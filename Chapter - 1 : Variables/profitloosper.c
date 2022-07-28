/*Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage*/
#include <stdio.h>
int main()
{
    int c_price,s_price,profit,loss;
    printf("Enter cost price\n");
    scanf("%d",&c_price);
    printf("Enter selling price\n");
    scanf("%d",&s_price);
    profit = s_price - c_price;
    loss = c_price - s_price;
    profit = profit/c_price*100;
    loss = loss/c_price*100;
    printf("the profit precentage is : %d\n",profit);
     printf("the loss precentage is : %d\n",loss);

    return 0;
}
//profit % = Profit/Cost Price × 100.
//Loss % = Loss/Cost Price × 100.
//profit = S.P. - C.P.
//loss = C.P - S.P
