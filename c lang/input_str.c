#include <stdio.h>
int main()
{
    char inp[67];
char ch;
int i = 0;
    while (ch != '\n')
    {
        scanf("%c",&ch);
        inp[i] = ch ;
        i++ ;
    }
    inp[i] = '\0' ;
    puts(inp) ;
}