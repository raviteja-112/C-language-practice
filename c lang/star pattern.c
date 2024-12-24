#include<stdio.h>
int main ()
{
    int a,b;
    printf("how many rows :");
    scanf("%d",&a);
    printf("how many coulmns :");
    scanf("%d",&b);
    for (int j = 0;j<b;j++){
        for(int i = 0;i<a;i++){
            printf("*");
        }
        printf("\n");
    }
    
   
}