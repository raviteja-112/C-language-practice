#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *a;
    a = (int*)malloc( 4 * (sizeof(int)));
    a[0] = 6 ;
a[1] = 1 ;
a[2] = 8 ;
a[3] = 3 ;
    for(int i = 0;i<=3;i++)
    {
        printf("the number is %d \n",a[i]);
    }
}