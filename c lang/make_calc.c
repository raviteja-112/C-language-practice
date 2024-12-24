#include <stdio.h>
int main()
{
    char op;
    int x,y ;
    printf("Welcome to calculator\n");
    printf("choose the operator\n");
    scanf("%c",&op) ;
    printf("enter the first number and second number\n ");
    scanf("%d,%d",&x,&y);

   switch (op)
   {
   case '+':
    printf("%d+%d = %d",x,y,x+y);
    break;
   case '-':
    printf("%d-%d = %d",x,y,x-y);
    break;
    case '*':
    printf("%d*%d = %d",x,y,x*y);
    break;
    case '/':
    printf("%d/%d = %d",x,y,x/y);
    break;
   default:
   printf("Enter the valid operator");
    break;
   }

}

