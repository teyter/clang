#include <stddef.h>
#include <stdio.h>

size_t divide(size_t *n) {
    if (*n % 2 == 0) {
        printf("even\n");
        *n = *n/2;
    }
    else {
        printf("odd\n");
        *n = (*n/2)+1;
    }
    printf("%zu\n", *n);
    return *n;
}

void tern(size_t *n) {
    *n = (*n % 2 == 0) ? (*n/2) : (*n/2)+1;
    return;
}

int main() 
{
    size_t b = 3;
    size_t c = 4;
    tern(&b);
    tern(&c);
}