#include<stdio.h>
int happy (int n)
int main ()
{
int n ;
happy(n);
if (happy(n)==1)
{
    printf("The number %d is happy number ",n);
}
else
{
    printf("The number %d is not happy number ",n)
}
}
void happy (int n)
{
   if (sum == 1)
   {
    return 1
   } 
   else{
    return 0 
   }
    while(n>0){
        sum = 0
        dig = n % 10;
        n = n / 10;
        sum = sum + dig*dig
    }
}