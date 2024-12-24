#include <stdio.h>
int main ()
{
    int price[3];
    printf("Enter the price of 1 = ");
    scanf("%d",&price[0]);

    printf("Enter the price of 2 = ");
    scanf("%d",&price[1]);

    printf("Enter the price of 3 = ");
    scanf("%d",&price[2]);

    printf("the final price of 1 is %f \n the final price of 2 is %f\n the final price of 3 is %f\n",price[0]+(0.18*price[0]),price[1]+(0.18*price[1]),price[2]+(0.18*price[2]))

;
}