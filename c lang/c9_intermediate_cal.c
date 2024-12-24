#include <stdio.h>
int main(){
    int a,b;
    char c;
    printf("which operation:");
    scanf("%c",&c);
    printf("insert the first number");
    scanf("%d",&a);
    printf("insert the second number");
    scanf("%d",&b);
    
    switch(c){
        case  '+':
        printf("%d",a+b);
        break;
        case  '-':
        printf("%d",a-b);
        break;
        case  '*':
        printf("%d",a*b);
        break;
        case  '/':
        if(b != 0){
        printf("%d",a/b);
        }
        break;
        case  '%':
        if(b != 0){
        printf("%d",a%b);
        }
        break;
        default :
        printf("invalid input");
    }

}