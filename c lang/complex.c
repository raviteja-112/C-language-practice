#include <stdio.h>
struct complex
{
    int real;
    int img;
};
int main ()
{
    struct complex a;
    struct complex *ptr = &a ;
    printf("Welcome to the programme \n Enter real and imaginary part of complex number ");
    scanf("%d",&a.real,&a.img);
    printf("real part is = %d \n",ptr -> real);
    printf("img part is =  %d \n",ptr -> img);

    
}