#include <stdio.h>
void arrs(int *arr,int size);
int main(){
    int arr[4] = {1,2,3,4};
    arrs(arr,4);
    for(int i = 0;i<4;i++){
        printf("%d\n",arr[i]);
    }
}
void arrs(int *arr,int size){
    for(int i = 0;i<size;i++){
        arr[i] = 0;
    }
}