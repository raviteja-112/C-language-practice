
#include <stdio.h>

int main ()
{
  int arr[] = { 1, 2, 3,3, 2, 1};
  int a = sizeof (arr)/sizeof(int); // used to find how many elements in array of type int
  printf("%d\n",a);
  int flag = 1;
  for (int i = 0; i < a / 2; i++)
    {
      if (arr[i] != arr[a - i - 1])
	{
	  flag = 0;
	  break;
	}
    }
    if(flag == 0){
        printf("not a palindrome");
    }
    else{
        printf("palindrome");
    }
}

