// #include <stdio.h>
// int main(){
//     int arr[10] = {0,1,0,1,0,0,1,0,1,0};
//     int co[2] ={0};


    
//     for(int i = 0;i<10;i++){
//         co[arr[i]]++;
//     }

//     for(int i = 0;i<2;i++){
//         printf("%d\n",co[i]);
//     }


// }



#include <stdio.h>
int main(){
    int arr[20] = {3, 5, 8, 7, 6, 4, 9, 2, 1, 0, 7, 6, 3, 1, 8, 5, 4, 9,8,3};
    int co[10] ={0};
    int max;
    int pos;

    for(int i = 0;i<20;i++){
        co[arr[i]]++;

    }

    for(int i = 0;i<10;i++){
        printf("%d  ",co[i]);
    }
    max = co[0];
    pos = 0;
    printf("\n");
    for(int i = 0;i<10;i++){
        if(co[i]>max){
            max = co[i];
            pos = i;
        }
    
    }


    printf("%d , %d  ",max,pos);
}