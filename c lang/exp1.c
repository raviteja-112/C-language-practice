#include <stdio.h>
#include <string.h>
void slice(char arr[],int m ,int n);
int main ()
{
    int m,n ;
char name[67];
printf("Enter anything do you want to slice \n");
fgets(name,67,stdin);
slice(name,5,10);
}
void slice(char arr[],int m,int n)
{

    char new[100];
    int j = 0 ;
    for(int i = m;i <= n;i++,j++)
{
    new[j] = arr[i] ;
}
new[j] = '\0' ;
puts(new);


}