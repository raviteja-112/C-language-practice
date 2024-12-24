#include<stdio.h>
int main()
{
    int n,sum;
    sum = 1;
    printf("Enter any number : \n");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++)
    {
     sum = sum * i ;
    }
    printf("%d",sum);
}