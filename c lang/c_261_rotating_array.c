#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    // {4 , 5,1,2,3}

    int pos =2;

    for(int i = 0;i<pos;i++){
    int temp = arr[4];


        for(int j = 4;j>0;j--){

            arr[j] = arr[j-1];

        }
        arr[0]=temp;

    }

    for(int i = 0;i<5;i++){
        printf("%d ,",arr[i]);
    }

}

