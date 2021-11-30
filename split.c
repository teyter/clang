#include <stdio.h>

int len(char* s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

// char** split(char* s)

int main() 
{
    char* s = "this is a sentence";
    printf("%d\n", len(s));

    char amessage[] = "now is the time";
    char* pmessage = "now is the time";
    printf("%c\n", amessage[0]);
    printf("%c\n", pmessage[0]);
    puts(amessage);
}
