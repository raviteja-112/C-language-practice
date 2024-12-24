#include <stdio.h>
#include <string.h>
int countvowels(char arr[]);
int main()
{
    char arr[67];
    printf("Welcome to the programme\n Enter a word or sentence : \n");
    fgets(arr,67,stdin);
    printf("The number of vowels in sentence is %d",countvowels(arr));
    return 0;
}
int countvowels(char arr[])
{
    char ch;
    int count = 0;
    for (int i = 0 ; arr[i] != '\0';i++)
    {
        if(ch == 'a' || ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
        {
            count++ ;
        }
    }
    return count-1 ;
}