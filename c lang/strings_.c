#include <stdio.h>
int main()
{
    char name[45];
    printf("Welcome to program\n");
    printf("Enter your name ");
    scanf("%s",&name);
    printf("Your name is %s",name); //dynamic means we can change the value after in the code
    return 0; //we can change strings dynamically if we use pointers instead of arrays
       //like using *arr is dynamical,but arr[] is static 
} 