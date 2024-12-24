#include<stdio.h>
int fac(int n);
int main ()
{
    int n;
printf("Enter the number : ");
scanf("%d",&n);
printf("the facotial is : %d",fac(n));
}
//function decalration
int fac(int n)
{
if (n == 1 ){
    return 1;
}
 
 int facsum = fac(n-1)*n ;
    return facsum ;

}