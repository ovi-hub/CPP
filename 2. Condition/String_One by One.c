#include <stdio.h>
#include <string.h>

int main()
{
    char S[100];
    int len = 0;
    gets(S);
    len = strlen(S);

    int i = 0;

    // I have changed the format specifier from %s to %c
    // to print each character of the string one by one.

    while (S[i] != '\0')
    {
        printf("%c", S[i]);
        i++;
    }

    return 0;
}
