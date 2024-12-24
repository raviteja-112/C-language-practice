#include<stdio.h>
int main ()
{
    int temp, n,count;
    count = 0;
    printf("Enter any number :");
    scanf("%d",&n);
    temp = n;
    if (n == 0)
    {
        printf("The number of numbers in 0 is 1");
    }
    else {
while(temp >0)
{
    temp = temp / 10;
    count = count + 1;
}
printf("The number of numbers in %d is %d",n,count);
    }
}
