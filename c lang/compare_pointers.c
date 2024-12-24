#include<stdio.h>
int main()
{
    int a,b ;
    int *x,*y;
    x = &a;
    y = &b; //dont type int y becoz we have delcalred it before
    printf("Enter the number a : \n");
    scanf("%d",x); //should not write & bcz x itself act as address &
    printf("Enter the number b : \n");
    scanf("%d",y);
    if(*x > *y){
        printf("the number %d is greater than %d",*x,*y);

    }
    else
    {
        printf("the number %d is greater than %d",*x,*y);
    }

}