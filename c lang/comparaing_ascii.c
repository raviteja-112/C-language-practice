#include <stdio.h>
int strcomp(char *sen1,char *sen2);
int main()
{
    char sen1[100] = "vi";
    char sen2[100] = "vodafoneidea";
    printf("%d",strcomp(sen1,sen2));
    
 
    return 0;
}

int strcomp(char *sen1,char *sen2){
    int asen1,asen2;
    int i = 0;
    int flag;
    while(sen1[i] != '\0'){
        int temp = (int)sen1[i];
        asen1 = asen1+temp;
        i++;
    }
    int j = 0;
    while(sen2[j] != '\0'){
        int temp1 = (int)sen2[j];
        asen2 = asen2+temp1;
        j++;
    }
    printf("%d , %d \n ",asen1,asen2);
    if(asen1 == asen2){
        flag = 0;
    }
    else if(asen1>asen2){
        flag = 1;
    }
    
    else{
        flag = -1;
    }
    return flag;
    
}