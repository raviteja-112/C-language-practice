#include <stdio.h>

int main()
{
    int sub,grade;
    float sum;
    sum = 0;
    sub = 0;
    printf("Enter the grade:");
    scanf("%d",&grade);
    while(grade != -1){
        sum = sum +grade;
        sub = sub + 1;
        printf("Enter the grade / to exit grade (-1):");
        scanf("%d",&grade);
    }
    printf("your average is :%f",((sum)/sub));

    return 0;
}
