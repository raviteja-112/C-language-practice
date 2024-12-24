
#include <stdio.h>

int main ()
{
  int arr[] = { 1, 2, 3,3, 2, 1};
  int a = sizeof (arr)/sizeof(int); // used to find how many elements in array of type int
  printf("%d\n",a);
  int sum;
  int max = 0;
  for (int i = 1; i < a ; i++){
       sum = arr[i-1]+arr[i];
       printf("%d\n",sum);
      if(sum>max){
          max = sum;
      }
      
  }
  printf("%d",max);
}

