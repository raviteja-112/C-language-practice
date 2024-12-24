# include<stdio.h>
int main()
{
    int n,and = 0 ;
    printf("Enter any number : \n");
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++)
    {
        if(i * i == n){
            and = 1 ;
            break;
        }
    }
    if(and == 1){
        printf("The number %d is perfect square ",n);
    }
    else 
    {
        printf("The number %d is non perfect square",n);
    }
}
