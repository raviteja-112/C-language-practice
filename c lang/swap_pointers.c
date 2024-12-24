#include<stdio.h>
void swap(int* a , int* b);
int main ()
{
int x ,y;
printf("Enter the value of a = ");
scanf("%d",&x);
printf("Enter the value of a = ");
scanf("%d",&y); // dont forget to write and
 swap(&x , &y); // dont write void for calling function
printf("x = %d,y = %d",x,y);
return 0;
}

void swap (int* a,int* b){
    int t = *a;
    *a = *b;
    *b = t;

}