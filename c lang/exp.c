#include <stdio.h>
int main ()
{ int n,arr[10];

    int *ptr = &arr[0];   //for input 
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d is ",i);
           scanf("%d",&arr[i]) ;
       
    }
   for(int i = 0 ; i <10 ;i++){   // for output
    printf("%d\t",arr[10]);
   }
      
}