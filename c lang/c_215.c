//trivial solution 
/*
#include <stdio.h>
int divisors(int a);
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    printf("%d",divisors(a));
    return 0;
}
int divisors(int a){
    int sum = 0;
    for(int i = 1;i<=a;i++){
        if(a%i == 0){
            sum = sum +i;
        }
    }
    
    return sum;
}

*/
