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
    scanf("%s", &guess);

    if ( strcmp(str1, guess) != 0 )
    {
        printf("Nope, try again.\n");
        return 1;
    } else {
        printf("Great work.\n");
    }

    printf("Now see if you can figure out the XOR key: \n");
    scanf("%s", &key);

    if ( strcmp(str2, key) != 0 )
    {
        printf("Try again!\n");
        return 2;
    } else {
        printf("Excellent work, now onto the next one!\n");
    }

    return 0;
}
