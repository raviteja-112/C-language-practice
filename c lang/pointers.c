#include <stdio.h>
int main ()
{
    int clubs = 150;
    int *vit = &clubs; // * = value at the point //& means address
int **vit1 = &vit;//** stares the address 2 times it is pointer to pointer
printf("%u\n",&clubs); //address of clubs
printf("%u\n",vit);//address of clubs only in a different way
printf("%u\n",&vit);//address of vit in mem
printf("%u\n",&vit1);//address of vit1
printf("%d\n",clubs);// value of clubs
printf("%d\n",*vit);//calling the value of the adress it has
printf("%d\n",**vit1); // like apply star as mathematical induction negation
printf("%d",*(&**vit1));// calling the value of address in it // *value(&address** vit) 
}  