#include<stdio.h>
int main()
{
    FILE *a ;
    a = fopen("oddfractxt","w");
    int n;
    printf("Welcome to the programm\nEnter the number you want :");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ;i++)
    {
        if(i % 2 != 0){
            fprintf(a,"the odd number is : %d \n",i);
        }
    }
    fclose(a);
    return 0;
}