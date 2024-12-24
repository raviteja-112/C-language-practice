#include <stdio.h>
#include<math.h>
int prime (int n);
int main ()
{
 int n1,n2;
 printf("Enter the first number :");
 scanf("%d",&n1);
 printf("Enter the second number :");
 scanf("%d",&n2);
 printf("the prime numbers between %d and %d are ",n1,n2);
 for (int i = n1 ; i <= n2 ; i++){
    if(prime(i)){
        printf("%d ",i);
    }  
 }
 

}
// function decleration
int prime(int n){
    for(int i = 2;i <= sqrt(n);i++){
        if (n % i == 0){
            return 0;
        }
        
    }
    return 1;
}