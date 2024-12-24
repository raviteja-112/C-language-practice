#include <stdio.h>
int main(){
    int a1,a2,a3;
    printf("Enter your marks sequentially:");
    scanf("%d %d %d",&a1,&a2,&a3);
    printf("the average grade is:%lf\n",(float)(a1+a2+a3)/3);
}