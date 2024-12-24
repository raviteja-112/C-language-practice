#include <stdio.h>
#include <string.h>
int main()
{
    // about counting how many characters
    char name[67];
    printf("Welcome to the program \n");
    printf("Enter your name :\n");
    fgets(name,67,stdin); //it takes enter button too
    int length = strlen(name); //it excludes \0 strlen()
    // if we that \0 then we must use length = length +1 
    printf("The length of the character is %d",length); 
    // about making both strings same 

    char oldstr = "old string";
    char newstr  = "new string";
    strcpy(newstr,oldstr);   // copies old string to new string
    puts(newstr);

    // about sticking two strings //it should be like strcat(1,2)
    strcat(oldstr,newstr);  //output will be oldstringoldstring becoz we have changed the value of new string
    // if not present it would be oldstringnewstring
    // and this is stored in oldstring (1)

    //strcpm string comparison
    //if both are equal then output 0 
    // if a>b then positive
    // if a<b then negative //depends on ascii value
    //strcpm(a,b)
char fstring[] = "vit";
char sstring[] = "iit";
printf("%d",strcpm(fstring,sstring));

}