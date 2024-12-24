#include<stdio.h>
float powo(float x,float n);
int main ()
{
    float x,n;
printf("Enter the number :");
scanf("%f",&x);
printf("Enter the order : ");
scanf("%f",&n);
printf("the answer is : %f",powo(x,n));

}
// function decalration
float powo(float x,float n)
{
    if (n==0){
        return 1;
    }
  
  float ans = powo(x,n-1)*x; //it calls back the function and input it self(powo)
  return ans;
}