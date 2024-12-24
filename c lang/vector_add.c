#include<stdio.h>
struct vectors {
    int x;
    int y;
};
void calcsum (struct vectors a ,struct vectors b ,struct vectors sum);
int main()
{
    struct vectors a ,b  ;
    struct vectors sum = {0};
 printf("Welcome to the programme \n Enter the x component of 1 vector \n");
 scanf("%d",&a.x);
 printf("Enter the y component of vector 1 \n");
 scanf("%d",&a.y);
 printf("Enter the x component of vector 2\n");
 scanf("%d",&b.x);
 printf("Enter the y component of vector 2\n");
 scanf("%d",&b.y);
 calcsum(a,b,sum);
}

void calcsum(struct vectors a ,struct vectors b ,struct vectors sum)
{
    sum.x = a.x + b.x ;
    sum.y = a.y +b.y ;
    printf("The x component of sum = %d \n",sum.x);
    printf("The y component of sum = %d \n",sum.y);

}