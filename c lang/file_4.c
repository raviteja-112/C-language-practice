#include <stdio.h>
int main ()
{
    FILE *a ;
    a = fopen("test_2.txt","r") ;
    char ch;
    ch =fgetc(a);
while(ch != EOF)
{
    printf("%c",ch);
    ch = fgetc(a);
}
    fclose(a);
}