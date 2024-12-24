#include <stdio.h>
int main ()
{
    int n;
printf("Enter the number : ");
scanf("%d",&n);
double fibo[n];
fibo[0] = 0;
fibo [1] = 1;
for (int i = 2 ; i < n ; i++)
{
    fibo[i] =fibo[i-1]+fibo[i-2];
    printf("%f\t",fibo[i]);
} 
}

