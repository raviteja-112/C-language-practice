#include<stdio.h>
int printlen(char arr[]);
int main()
{
    char name[67];
printf("Welcome to program\n");
printf("Enter the name \n");
fgets(name,67,stdin);
printf("The length of the string is %d",printlen(name));
}
int printlen(char arr[]) //have to write what type of array is it
{
    int  count = 0 ;
    for (int i = 0 ;arr[i] != '\0';i++)  //don't forget ' '
    {
        count++;
    }
    return count-1;
}