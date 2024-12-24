#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main ()
{
    char pass[67];
    printf("Welcome to the salting programme\n");
    printf("Enter your password\n");
    fgets(pass,67,stdin);
    salting(pass);
   
    
}
void salting(char password[])
{
char salt[] = "123\0" ;
char newpass[212];
strcpy(newpass,password);
strcat(newpass,salt);
puts(newpass);
}