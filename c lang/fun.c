#include<stdio.h>
void table(int a);
int main()
{
    int n;
    printf("Enter the number you want : ");
    scanf("%d",&n);
     table(n);
    return 0;

}

//function declaration
void table(int a){
    int x;
    for ( int i = 1 ;i<= 10 ;i++){
       x = a*i;
       printf("%d \n",x);
    }
    
}