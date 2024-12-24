#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int arr[] = {1,-2,2,3};
    int min = arr[0]+arr[1];
    int n,m;
    int sum;
    for(int i = 0;i<4;i++){
        for(int j = i+1;j<4;j++){
            sum = arr[i]+arr[j];
            if(abs(sum)<abs(min))
            min = sum;
            n = i;
            m = j;
        }
    }
    
    printf("%d,%d \n",n,m);

    return 0;
}