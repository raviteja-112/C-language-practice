#include <stdio.h>
float fuc(int number,int digit){
    int lessthan=0;
    int sum =0;
    int dig;
    while(number!=0){
        dig = number %10;
        printf("%d\n",dig);
        if(dig<digit){
            lessthan = lessthan+1;
            sum = sum+dig;
        }
        number = number /10;
        

    }
    printf("the number of digits less than %d are %d\n",digit,lessthan);
    return (float)sum/lessthan;

}
int main(){
int number,digit;
printf("Enter the number:");
scanf("%d",&number);
printf("Enter the digit:");
scanf("%d",&digit);
printf("the average is :%f\n",fuc(number,digit));
}
