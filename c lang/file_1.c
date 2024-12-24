#include <stdio.h>
int main ()
{
    FILE *f ;
    f = fopen("test.txt","r");
    char ch;
    fscanf(f,"%c",&ch);
    printf("the character is %c",ch);
    fclose(f);
}