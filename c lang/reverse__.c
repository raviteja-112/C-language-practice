#include <stdio.h>
void reverse (int  arr[],int n);
void print_arr (int arr[],int n );
int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9} ;
    reverse(arr[9],9);
    print_arr(arr[9],9);
}

void reverse (int arr[],int n)
{
    for (int i = 0 ; i < n/2 ; i++)
    {
        int first_value = arr[i];
        int second_value = arr[n-i-1];
        arr[i] = second_value;
        arr[n-i-1] = first_value ;
    }
}

void print_arr (int arr[],int n)
{
    for (int i = 0 ; i<n;i++)
    {
    printf("%d \t", arr[n]);
    }
}