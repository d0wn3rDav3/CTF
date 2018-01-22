#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<sys/ptrace.h>

#define MAX 24

char* key = "\x4a\x5d";

int nobug(void)
{
    if (ptrace(PTRACE_TRACEME, 0, 1, 0) < 0)
    {
        printf("I'm against picketing, but I don't know how to show it. --Mitch Hedberg\n");
        sleep(60);
        return 2;
    }
}

char * xor(char *message, char *key)
{
    size_t messagelen = strlen(message);
    size_t keylen = strlen(key);

    char *encrypted = malloc(messagelen + 1);

    int i;

    for ( i = 0; i < messagelen; i++ )
    {
        encrypted[i] = message[i] ^ key[i % keylen];
    }

    encrypted[messagelen] = '\0';

    return encrypted;
}

int main(int argc, char *argv[])
{
    nobug();
    
    char message[] = "n0t3ncrypti0n";
    char guess[MAX] = {};
    char *encrypted = xor(message, key);
    
    printf("This is the encoded message: %s\n", encrypted);
    printf("Now decode it for the flag.\n");
    
    fgets(guess, MAX, stdin);

    __asm__("int3");

    if (strncmp(message, guess, strlen(message) -1) == 0)
    {
        printf("Nice!\n");
        printf("Flag: %s\n", message);
    } else {
        printf("Try again\n");
        return 1;
    }

    free(encrypted);

    return 0;
}
