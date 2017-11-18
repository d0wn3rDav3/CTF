#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

/* Not sure where I was going with this,.. */

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
    char *message = "TESTING This Out";
    char *key = "dumb";

    char *encrypted = xor(message, key);
    printf("%s\n", encrypted);
    free(encrypted);

    return 0;
}
