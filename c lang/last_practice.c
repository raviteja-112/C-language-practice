#include <stdio.h>
#define size 5


void swap(int *val1,int *val2){
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void swaparray(int *arr1,int *arr2){
    for(int i =0;i<size;i++){
        swap(&arr1[i],&arr2[i]);
    }
}

void printarr(int *arr1){
    for(int i = 0;i<size;i++){
        printf("%d ",arr1[i]);
    }
}

int main(){
    int arr1[size] = {2,4,6,3,5};
    int arr2[size] = {5,6,7,9,3};
    printf("Arrays before swaping:");
    printarr(arr1);
    printf("\n");
    printarr(arr2);
    printf("\n");
    swaparray(arr1,arr2);
    printf("Arrays after swaping:");
    printarr(arr1);
    printf("\n");
    printarr(arr2);
    printf("\n");


}