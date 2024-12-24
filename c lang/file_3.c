#include <stdio.h>
int main()
{
    FILE *a;
    a = fopen("test_1.txt","w") ;
   fputc('F',a);
   printf("the updated character is %c",fgetc(a)); // this dont work because it is write mode
   fclose(a);
// use putc to change anything in any file
}