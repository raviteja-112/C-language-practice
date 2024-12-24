#include <stdio.h>
int pell(int num);
int pell1(int num);
int main(){
    int num;
    printf("Enter the num:");
    scanf("%d",&num);

//     for(int i = 0;i<num;i++){
//         printf("%d\n",pell(i));

for(int i = 0;i<num;i++){
    printf("%d\n",pell1(i));
}

 }

//using recursion

int pell(int num){
    if (num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    return 2*pell(num-1)+pell(num-2);
}
//without recursion
int pell1(int num) {
    if (num == 0) {
        return 0;
    }

    if (num == 1) {
        return 1;
    }

    int pre = 0;
    int pre1 = 1;
    int next;

    for (int i = 2; i <= num; i++) {
        next = 2 * pre1 + pre; 
        pre = pre1;
        pre1 = next;
    }

    return next;
}
