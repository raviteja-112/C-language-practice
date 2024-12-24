#include <stdio.h>
int main(){
    float a1,a2;
    a1 = 95.5;
    a2 = 93.3;
    float temp;
    printf("a1 = %f\na2 = %f\n",a1,a2);
    temp = a1;
    a1 = a2;
    a2 = temp;
    printf("a1 = %f\na2 = %f\n",a1,a2);
}