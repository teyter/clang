#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t divide(size_t *n) 
{
    if (*n % 2 == 0) 
    {
        printf("even\n");
        *n = *n/2;
    }
    else 
    {
        printf("odd\n");
        *n = (*n/2)+1;
    }
    printf("%zu\n", *n);
    return *n;
}

void tern(size_t *n) 
{
    *n = (*n % 2 == 0) ? (*n/2) : (*n/2)+1;
    return;
}

void underscore(char* string, size_t *n)
{
    char *underscore = "_";
    printf("before: %s\n", string);
    printf("%zu\n", *n);
    if (*n % 2 == 0) 
    {
        printf("even\n");
        *n = *n/2;
    }
    else 
    {
        printf("odd\n");
        *n = (*n/2)+1;
        // concat underscore to end of string
        strcat(string, underscore);
    }
    printf("%zu\n", *n);
    printf("after: %s\n", string);
    return;

}

int main() 
{
    char *s = "abc";
    size_t n = 3;
    underscore(s, &n);
    /**
    size_t b = 3;
    size_t c = 4;
    tern(&b);
    tern(&c);
     */
}