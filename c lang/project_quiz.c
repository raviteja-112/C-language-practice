#include <stdio.h>
int main ()
{
    int ans;
    printf("Welcome to the quiz contest \t lets start the game");
    printf("Who is the prime minister of India :");
    printf("a) Narendra Modi \n b) Soniya Gandhi \n c) Rahul Gandhi \n d) Amit Shah");
    printf("1 -> a \n 2 -> b \n 3 -> c \n 4 -> d \n");
    scanf("%d",&ans);
    if (ans == 1)
    {
        printf("YOU WON");
    }
    else
    {
        printf("YOU LOST");
    }

}
