#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char toUpper(char c) { return c-32; }

void jaden(char* s)
{
    int len = strlen(s);
    printf("%c", toUpper(s[0]));
    for (int i = 1; i < len; i++)
    {
        if (s[i-1] == ' ' && s[i] > 96)
        {
            printf("%c", toUpper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

int main() 
{
    char* s = "realize Real eyes real lies";
    // printf("%s\n", s);
    // printf("%ld\n", strlen(s));
    jaden(s);
}
