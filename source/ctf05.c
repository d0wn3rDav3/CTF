#include<stdio.h>
#include<string.h>

char key[] = "DEAD";

int welcome(void)
{
    printf("#Welcome to the first CTF#\n#This is REALLY easy ;-)#\n");
}

int main(void)
{
    char a[] = "COW";
    char *c = strcat(key, a);
    const char guess[24] = {};

    printf("Guess the password: \n");
    scanf("%s", &guess);

    if ( strcmp( guess, c ) != 0 )
    {
        printf("Nope, better luck next time.\n");
        return 1;
    } else {
        printf("Great work, now onto the next one.\n");
    }

    return 0;
}
