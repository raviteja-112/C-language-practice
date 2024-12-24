#include <stdio.h>
int main ()
{
    char fullname[67];
    printf("Welcome to the program \n ");
    printf("Enter your full name \n");
    gets(fullname); //outdated dont use it
    puts(fullname);
    fgets(fullname,100,stdin);//use this one it is modern
    return 0;
}