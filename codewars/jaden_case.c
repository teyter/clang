// Jaden Casing Strings
// https://www.codewars.com/kata/5390bac347d09b7da40006f6/c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char capitalize(char c)
{
    int letter = (int)c;
    if (letter < 97) return (char)letter;
    return (char)letter-32;
}

char *to_jaden_case(char *jaden_case, const char *string)
{
	*jaden_case = '\0';
    int len = strlen(string);
    jaden_case[0] = capitalize(string[0]);
    for (int i = 1; i < len; i++)
    {
        if (string[i-1] == ' ')
        {
            jaden_case[i] = capitalize(string[i]);
        }
        else
        {
            jaden_case[i] = string[i];
        }
    } 
    jaden_case[len] = '\0';
	return jaden_case;
}

int main() 
{
    char string[] = "how can mirrors be real if our eyes aren't real";
    int len = strlen(string);
    char *jaden = malloc( sizeof(char) * (len + 1) );
    to_jaden_case(jaden, string);
    free(jaden);
    return 0;
}