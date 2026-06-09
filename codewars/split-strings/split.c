#include <stddef.h>
#include <stdio.h>

typedef char Pair[2];

Pair *split_2(const char *string, size_t *n_pairs) 
{ // report the length of your array through `n_pairs` and return a freeable pointer

    for (int i = 0; i < *n_pairs; i+=2)
    {
        printf("%d%d: ", i,i+1);
        printf("%c%c ", string[i], string[i+1]);
        printf("\n");
    }
    // char *array = malloc(*n_pairs * sizeof(char));
    *n_pairs = (*n_pairs % 2 == 0) ? (*n_pairs/2) : (*n_pairs/2)+1;
    return NULL;
}

int main() 
{
    /**
    char *a = "abc";
    size_t n = 3;
    split_2(a, &n);
     */

    char *b = "abcdef";
    size_t m = 6;
    split_2(b, &m);

}