#include<stdio.h>
#include<string.h>
struct address 
{
    int houseno;
    int block;
    char city[100];
    char state[100];
};
void printadd(struct address);
int main ()
{
  struct address adds[5];
 printf("Welcome to the programme \nEnter the info of person 1 :");
 scanf("%d\n",&adds[0].houseno);
 scanf("%d\n",&adds[0].block);
 scanf("%s\n",adds[0].city);
 scanf("%s\n",adds[0].state);
 printadd(adds[0]);
}
void printadd(struct address adds )
{
    printf("The address is :%d , %d ,%s,%s",adds.houseno,adds.block,adds.city,adds.state);
}