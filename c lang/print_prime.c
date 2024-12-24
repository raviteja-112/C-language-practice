#include<stdio.h>
#include<math.h>
int main()
{
    int n,isprime = 1;

    printf("Enter the number :");

    scanf("%d",&n);

    for (int i = 2 ; i<= sqrt(n);i++){

        if(n % i == 0){

            isprime = 0;

            break;
        }  
    }

   
    if(isprime == 1)
    {
        printf("prime");
    }
    else{
        printf("nonprime ");   
}

}