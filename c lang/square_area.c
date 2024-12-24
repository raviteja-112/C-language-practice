#include<stdio.h>
void square(int a);
int main ()
{
   int a ;
   printf("what is the side of a square ");
   scanf("%d",&a);
   square(a);
 } 
 void  square(int a)
{
printf("the area of square is : %d",a*a);
}