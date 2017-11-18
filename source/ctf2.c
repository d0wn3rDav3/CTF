#include<stdio.h>

int welcome(void)
{
    printf("#Welcome to CTF2\n#Get used to using a debugger\n");
}

int main(void)
{
    int x = 24;
    int y = 7;
    int z = 365;
    int i,j, k;

    welcome();

    printf("Please enter a number: \n");
    scanf("%d", &i);

    printf("Now what's the total: \n");
    scanf("%d", &j);

    k = x * y + z +i;

    if ( j != k )
    {
        printf("Nope, better luck next time.\n");
        return 1;
    } else {
        printf("Great work.\n");
    }

    return 0;
}
