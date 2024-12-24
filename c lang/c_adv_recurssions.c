// #include <stdio.h>
// int cout(int n);
// int main (){
//     int n = 6;
//     printf("%d",cout(n));

// }
// int cout(int n){
//     int a;
//     printf("Enter the number:");
//     scanf("%d",&a);

//     if(a== -1){
//         return 0;
//     }
//     else if(n>a){
//         return 1+cout(n);
//     }
//     else{
//         return cout(n);
//     }
// }


// #include <stdio.h>
// int even();
// int main()
// {
//     printf("%d",even());

//     return 0;
// }
// int even(){
//     int num;
//     printf("enter the number:");
//     scanf("%d",&num);
//     if(num == -1){
//         return 0;
//     }
//     if(num%2 == 0){
//         return 1+even();
//     }
//     return even();
// }




////////////////////////////////important
// #include <stdio.h>
// void num(int n);
// int main()
// {
//     num(4);

//     return 0;
// }
// void num(int n){
//     if(n >= 1){
//         num(n-1);
//         printf("%d ",n);
//     }
// }


// #include<stdio.h>


// void printsequence(int total,char c1,char c2);

// int main(){
//     char a,c;
//     printsequence(3,'a','c');
// }

// void printsequence(int total,char c1,char c2){
//     if(total>0){
//     printf("%c",c1);
//     printsequence(total-1,c1,c2);
//     printf("%c",c2);

// }
// }


#include<stdio.h>


void printsequence(int total,char c1);

int main(){
    char a,c;
    printsequence(3,'a');
}

void printsequence(int total,char c1){
    if(total>0){
    printf("%c",c1);
    printsequence(total-1,c1);
    printf("%c",c1-32); //for converting small letters to capital letters

    //also we can use c1-'a'+'A'

}
}