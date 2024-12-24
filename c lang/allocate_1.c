#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Welcome to the programm\nEnter the number you want:");
    scanf("%d",&n);
    int *a;
    a = (int*)malloc(n*(sizeof(int)));
    printf("%d",sizeof(a));
}