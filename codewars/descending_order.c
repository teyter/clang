// Descending Order
// https://www.codewars.com/kata/5467e4d82edf8bbf40000155/train/c

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

int comp(const void* a, const void* b) {
  	
  	// If a is smaller, positive value will be returned
    return (*(int*)a - *(int*)b);
}

uint64_t descendingOrder(uint64_t n)
{
    char string[256];  
    sprintf(string, "%lu", n);
    // printf("%s\n", string);
    int len = strlen(string);

    // char *sorted = malloc( sizeof(char) * (len + 1) );
    int size = (int)(sizeof(int) * (len + 1));
    printf("size = %d\n", size);
    int *sorted = malloc( sizeof(int) * (len + 1) );
    printf("sizeof(int) * (len + 1) = %ld\n", sizeof(int) * (len + 1));
    printf("sizeof(int): %ld\n", sizeof(int));
    printf("len: %d\n", len);
    printf("sorted: %ld\n", sizeof(sorted));
    printf("len(sortd): %ld\n", sizeof(sorted) / sizeof(sorted[0]));
    
    for (int i = 0; i < len; i++)
    {
        sorted[i] = (int)string[i];
    }
    // print_int_arr(sorted);
    long siz = sizeof(sorted) / sizeof(sorted[0]);
    // printf("sizeof(sorted): %ld\nsizeof(sorted[0]): %ld\n", sizeof(sorted), sizeof(sorted[0]));
    // printf("siz: %ld\n", siz);
    qsort(sorted, siz, sizeof(int), comp);
    // print_int_arr(sorted);
    free(sorted);
    return 0;
}

int main() 
{
    uint64_t n = 25431;    
    descendingOrder(n);
}