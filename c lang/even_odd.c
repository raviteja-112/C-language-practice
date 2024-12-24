#include <stdio.h>
void even_odd(int a );
int main ()
{
    int a;
    printf("Welcome to even and odd\n");
    printf("Enter the number :\n");
    scanf("%d",&a);
    even_odd(a);
    
}
void even_odd(int a)
{
    if ( a % 2 == 0)
    {
        printf("It's a even number");

    }
    else
    {
        printf("It's a odd number ");
        
    }
}