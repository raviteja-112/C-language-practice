#include<stdio.h>
typedef struct point
{
    int num;
    int den;
}point;

void add1(point *p1);
void dec1(point *p1);
 addition 
int main(){
    point p1 ={1,2};
    printf("%d\n",(p1).num);
    printf("%d\n",(p1).den);
    add1(&p1);
    printf("%d\n",(p1).num);
    printf("%d\n",(p1).den);
    point p2 = {3,2};
    dec1(&p2);
    printf("%u\n",p2.num);
    printf("%d\n",p2.den);


}

void add1(point *p1){
    (*p1).num = (*p1).num + (*p1).den;
    (*p1).den = (*p1).den;


}

void dec1(point *p1){
    (*p1).num = (*p1).num - (*p1).den ; 
    (*p1).den = (*p1).den ;

}
void additon(point p1,point p2){

}
