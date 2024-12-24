#include<stdio.h>
#include<math.h>
void circle(int r);
void  square(int n);
void rectangle(int a,int b);
int main ()
{
    int a,b,n,r;
    printf("Enter the radius of circle : ");
    scanf("%d",&r);
    printf("Enter the side  of square : ");
    scanf("%d",&n);
    printf("Enter the length  of recatngle : ");
    scanf("%d",&a); 
    printf("Enter the breadth of recatngle : ");
    scanf("%d",&b);
   circle(r); 
    square(n);
     rectangle(a,b);
    
    
    return 0;    
}

//declartion of function
void circle(int r){
    printf("the area of circle is : %f\n",3.14*r*r);
  
}
void rectangle(int a, int b){
    printf("the area of rectangle is : %d\n",a*b);
   
}
void square(int n){
    printf("the area of square is : %d\n",n*n);
}