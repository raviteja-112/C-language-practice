#include<stdio.h>
int fibo(int n);
int main ()
{
    int n;
printf("Enter the mumber you want : ");
scanf("%d",&n);
printf("the fibinacchi number is : %d",fibo(n));
}
//function declaration
int fibo(int n)
{
   if(n==0)
{
    return 0;
}    
if (n==1)
{
    return 1;
}
 int fibon = fibo(n-1)+fibo(n-2);

    return fibon;
}