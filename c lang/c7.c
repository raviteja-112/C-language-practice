#include <stdio.h>
int main(){
    int dis,speed;
    printf("Enter the distance in KM:");
    scanf("%d",&dis);
    printf("Enter the speed in KMPH:");
    scanf("%d",&speed);
    int hours_time = (dis/speed);
    
    float speed_permin = (speed/60.0);
    float min_time = (dis%speed)/speed_permin;
    printf("the time taken in hr is :%d and min is %f\n",hours_time,min_time);
}