#include<stdio.h>
#include<string.h>

#define MAX 24

int welcome(void)
{
    printf("Welcome to your next CTF\nThis one may look tricky\nHowever it just uses\nA simple XOR Function\nGood Luck\n");
}

int redHerring(void)
{
    int result;
    float password;
    const char lol[] = "LOLOLOLOLOLOLOLOLO";

    int x = 808;
    int y = 85;
    int z = 15;

    result = x * y + z;

    password = result % 2;
}

int main(void)
{
    int i;
    const char str1[] = "StopSayingCyber";
    const char str2[] = "020515";
    char out[MAX];
    char guess[MAX] = {};
    char key[MAX] = {};

    for ( i = 0; i < strlen(str1); i++ )
    {
        char temp = str1[i] ^ str2[i];
        out[i] = temp;
    }

    out[i] = '\0';
    
    welcome();
    redHerring();
    printf("\n");
    
    printf("This is XOR encoded using a simple key %s\n", out);

    printf("Now see if you can figure out what the decoded password is: \n");
    fgets(guess, MAX, stdin);

    if ( strncmp(str1, guess, strlen(str1) -1) == 0 )
    {
        printf("Sweet!\n");
    } else {
        printf("Nope...\nTry again.\n");
        return 1;
    }

    printf("Now see if you can figure out the XOR key: \n");
    fgets(key, MAX, stdin);

    if (strncmp(str2, key, strlen(str2) - 1) == 0 )
    {
        printf("Great work!\n");
    } else {
        printf("Give it another shot.\n");
        return 2;
    }
    
    return 0;
}
