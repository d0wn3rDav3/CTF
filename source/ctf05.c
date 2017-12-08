#include<stdio.h>
#include<string.h>
#include<sys/ptrace.h>

char key[] = "DEAD";

int welcome(void)
{
    printf("#Welcome to CTF 0.5#\n#This is REALLY easy ;-)#\n");
}

int main(void)
{
    char a[] = "COW";
    char *c = strcat(key, a);
    const char guess[24] = {};

    if (ptrace(PTRACE_TRACEME, 0, 1, 0) < 0)
    {   
        printf("Debuggig are we?\n");
        system("/usr/bin/firefox https://media.giphy.com/media/Vuw9m5wXviFIQ/giphy.gif");
        return 2;
    }
    
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
