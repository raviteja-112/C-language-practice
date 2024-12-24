#include <stdio.h>
int main ()
{

FILE *a ;
a = fopen("Student_data.txt","w");
char name[67];
float cgpa;
int marks ;
printf("Welcome to programme\n");
printf("Enter your name :");
scanf("%s",name);
printf("Enter your cgpa :");
scanf("%f",&cgpa);
printf("Enter your marks :");
scanf("%d",&marks);

fputs(a,"student name : %s",name);
fputs(a,"student marks : %d",marks);
fputs(a,"student name : %f",cgpa);
fclose(a) ;

} 