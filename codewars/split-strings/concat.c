#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = "a"; 
    char *s2 = "_";

    // Concatenate str2 to str1
    strcat(s1, s2);

    printf("%s\n", s1);  
    return 0;
}