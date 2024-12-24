#include<stdio.h>
int prime(int n);
int main()
{
    int n1,n2;
    printf("Enter the number :");
    scanf("%d",&n1);
    printf("Enter the number :");
    scanf("%d",&n2);
    for(int i = n1;i<=n2;i++)
    {
        if(prime(i))
        {
            printf("%d \t",i);
        }
    }
}

int prime(int n)
{
    for(int i = 2;i * i <= n;i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1 ;
}