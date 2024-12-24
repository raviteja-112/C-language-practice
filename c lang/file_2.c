#include <stdio.h>
int main()
{
    FILE *a;
    a = fopen("test_1.txt","r") ;
   char b =  fgetc(a);
   printf("the character is %c\n",b);
   printf("the character is %c\n",fgetc(a));
   fclose(a);
   // for getting vlaue then use read and fgetc store it and use printf

}