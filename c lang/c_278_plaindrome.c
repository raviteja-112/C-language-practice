#include <stdio.h>
#include<string.h>
int main()
{
 char sen[100];
 gets(sen);
    int flag = 1;
 int len = strlen(sen);
 for(int i = 0;i<(len/2);i++){
     if(sen[i] != sen[len-i-1]){
         flag = 0;
     }
 }
 
 if(flag == 1){
     printf("palindrome");
 }
 else{
     printf("not");
 }
    return 0;
}
