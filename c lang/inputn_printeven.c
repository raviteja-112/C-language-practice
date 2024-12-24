#include<stdio.h>
int main()
{
    int n;
    printf("Welcome to the program \nEnter how many numbers you want:");
    scanf("%d",&n);
     int arr[n];
    for(int i = 0 ;i <=n-1;i++)
    {
        printf("Enter the %d indexed number :",i);
        scanf("%d",&arr[i]);
    }
        printf("the even numbers are : ");
    for(int i =0 ; i<=n-1;i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d\t",arr[i]);
        }
    }
}