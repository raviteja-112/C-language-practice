#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a ;
    a = (int*)calloc(5,sizeof(int));
    printf("Enter the 5 numbers: \n");
    for (int i = 0 ;i<5;i++)
    {
        scanf("%d\n",&a[i]);
    }
    a = realloc(a,8);
    printf("Enter the 8 numbers: \n");
    for (int i = 0 ;i<8;i++)
    {
        scanf("%d\n",&a[i]);
    }

    for(int i = 0 ;i<8;i++)
    {
        printf("the %d number is %d \n",i,a[i]);
    }
}