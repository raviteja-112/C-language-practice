#include<stdio.h>
#include<math.h>
float circle(int r);
float square(int n);
float rectangle(int a,int b);
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
   printf("area is %f\n",circle(r)); 
    printf("area is %f\n",square(n));
     printf("area is %f\n",rectangle(a,b));
    
    
    return 0;    
}

//declartion of function
float circle(int r){
    return 3.14*r*r ;
  
}
float rectangle(int a, int b){
    return a*b;
   
}
float square(int n){
    return pow(n,2);
}