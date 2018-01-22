#include<stdio.h>

int welcome(void)
{
    printf("###CTF2###\nJust find the sum\n\n");
}

int main(void)
{
    int x = 99;
    int y = 31;
    int z = 767;
    int i, j;

    i = x + y * z;
    
    welcome();
    
    printf("Please enter the total: \n");
    scanf("%d", &j);

    if ( i != j )
    {
        printf("lol, math.\n");
    } else {
        printf("Great work, onto the next one.\n");
        printf("Flag: %d\n", i);
    }
    
    return 0;
}
