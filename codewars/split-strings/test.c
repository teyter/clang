#include <stddef.h>
#include <stdio.h>

typedef char Pair[2];

void foo(const char *string) {
    printf("%s\n", string);
    return;
}

void bar(size_t *n_pairs) {
    printf("%zu\n", *n_pairs);
    return;
}

int main() 
{
    char *a = "abc";
    size_t b = 3;

    foo(a);
    bar(&b);
}