#include <stdio.h>
float ftoc(float c);
int main()
{
    float c;
printf("Enter the celsius temp : ");
scanf("%f",&c);
printf("the temperature in frenhiet is : %f",ftoc(c));
}
//declaration 
float ftoc(float c )
{
float f = (9*c/5)+32 ;
return f ;
}