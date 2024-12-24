#include <stdio.h>
int main(){
    int sec;
    printf("Enter the seconds:");
    scanf("%d",&sec);
    int hours = (sec/3600);
    int min = (sec%3600)/60;
    int secd = (sec%3600)%60;
    printf("the hours are:%d\nthe min are :%d\nthe sec are %d\n",hours,min,secd);
}