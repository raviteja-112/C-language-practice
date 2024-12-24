#include<stdio.h>
#include<string.h>
void findl(char arr[],char letter);
int main ()
{
    char letter;
char word[67];
printf("Enter the word");
fgets(word,67,stdin);
printf("Enter the letter you want");
scanf("%c",&letter);
findl(word,letter);
}
void findl(char arr[],char letter)
{
    for(int i = 0 ;arr[i] != '\0';i++ )
    {
        if(arr[i] == letter)
        {
            printf("The letter is present");
            return ;
        }
    }
printf("The letter is not present");
}