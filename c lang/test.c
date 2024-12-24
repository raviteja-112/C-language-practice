#include <stdio.h>
int main(){
    char ch;
    char se[50];
    char s[100];
    scanf("%c",&ch);
    scanf("%s",se);
    scanf("%[^\n]s",s);
    scanf(" \n");
    printf("%c\n",ch);
    printf("%s\n",se);
    printf("%s\n",s);
    

}