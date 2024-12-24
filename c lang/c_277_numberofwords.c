#include<stdio.h>
#include<string.h>
int main(){
    int words;
    char sen[100];
    gets(sen); // we can use fgets which is more secure 
    for(int i = 0;i<strlen(sen);i++){
        if(sen[i] == ' '){
            words = words+1;
        }
    }
    words++; // here we are adding word +1 due to '\0'
    printf("%d",words);
}   