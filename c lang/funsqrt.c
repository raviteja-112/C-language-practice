#include <stdio.h>
#include<math.h>
void sqroot(int n);
int main ()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
     sqroot(n);
}
// function declaration 
void sqroot(int n)
{
    printf("the square root of number : %d is %f :",n,sqrt(n));
}