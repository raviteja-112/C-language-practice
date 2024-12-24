#include<stdio.h>
int main()
{
    int n;
    printf("Enter the table number you want :");
    scanf("%d",&n);
    for(int i = 1 ; i <= 10;i++)
    {
        int ans = n * i;
        printf("%d\t",ans);
    }
}