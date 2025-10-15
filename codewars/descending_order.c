// Descending Order
// https://www.codewars.com/kata/5467e4d82edf8bbf40000155/c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int ctoi(char c) { return (int)c - 48; }

void print_int_arr(int *arr)
{
    int i = 0;
    while (arr[i] != '\0') 
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

int comp(const void* a, const void* b) 
{
    return (*(int*)b - *(int*)a);
}

uint64_t descendingOrder(uint64_t n)
{
    if (n < 10) return n;
    char string[32];  
    sprintf(string, "%lu", n);

    int len = strlen(string);
    int size = (int)(sizeof(int) * (len));
    int *sort = malloc( size );
    for (int i = 0; i < len; i++)
    {
        sort[i] = (int)string[i];
    }

    qsort(sort, size/sizeof(int), sizeof(int), comp);
    char *sorted = malloc( sizeof(char) * (len + 1));

    for (int i = 0; i < len; i++)
    {
        sorted[i] = (char)sort[i];
    }
    sorted[len] = '\0';
    uint64_t ret = strtoull(sorted, NULL, 10);
    free(sort);
    free(sorted);
    return ret;
}

int main() 
{
    uint64_t n = 1469594179;    
    descendingOrder(n);
}