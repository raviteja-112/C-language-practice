#include <stdio.h>
int main ()
{
    FILE *a ;
    a = fopen("test.txt","r");
    if (a == NULL)
    {
        printf("File does exists");
    }
    else 
    {
        printf("File is present ");
        fclose(a);
    }
    
}