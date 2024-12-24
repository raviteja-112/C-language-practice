
#include <stdio.h>
#include <stdlib.h>

// counting characters

// // int main (){
//     char mychar;
//     int count;
//     FILE *fp;
//     fp = fopen("hello.txt","r");

//     if(fp != NULL){
//         while((mychar = fgetc(fp)) != EOF){
//             printf("%c ",mychar);
//             count++;
//         }
//         printf("\n");
//     }
//     printf("THe number of characters are %d\n",count);
//     fclose(fp);
// }

//counting number of lines

// // int main(){
//     FILE *fp;
//     char mychar;
//     int count =0;
//     fp = fopen("hello.txt","r");
//     if(fp != NULL){
//         while((mychar = fgetc(fp)) != EOF){
//             if( mychar == '\n'){
//                 count++;
//             }
//         }

//     }
//     printf("number of lines %d \n",count);

//     fclose(fp);
// }

// //writing to the file

// int main(){
//     FILE *fp;
//     fp = fopen("test.txt","w");
//     if(fp != NULL){
//         for(int i = 1;i<= 10;i++){
//             fprintf(fp,"%d %d\n",i,i*i);
//         }

//     }
//     fclose(fp);
// }

// int main(){
//     int num1,num2;
//     FILE *fp;
//     char ch;
//     fp = fopen("test.txt","r");
//     if(fp != NULL){
//         for(int i = 0;i<= 10;i++){
//             fscanf(fp,"%d%d",&num1,&num2);
//             printf("%d %d\n",num1,num2);
//         }

//     }
//     fclose(fp);
// }

// int main(){
//     FILE *fp;
//     char ch;
//     char inch;
//     int count;
//     scanf("%c",&ch);
//     fp = fopen("hello.txt","r");
//     if(fp != NULL){
//         while (!feof(fp))
//         {
//             if(fgetc(fp)==ch){
//                 count++;
//             }
//         }
        

//         printf("number of apperance is %d",count);
//     }
//     fclose(fp);
// }
 