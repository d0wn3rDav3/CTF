#include<stdio.h>

int welcome(void)
{
    printf("Welcome to CTF1\nJust find the sum\n");
}

int main(void)
{
    int x = 99;
    int y = 31;
    int z = 767;
    int i, j;

    i = x + y * z;
    
    printf("Please enter the total: \n");
    scanf("%d", &j);

    if ( i != j )
    {
        printf("LOL, math.\n");
    } else {
        printf("Great work, onto the next one.\n");
    }
    
    return 0;
}
