#include <stdio.h>
#include <stdlib.h>

char** split(const char* s, int *n) {
    int len = 0; // lengd stora strengs
    int f = 1; // fjoldi litla strengja
    while(s[len] != '\0') {
        len++;
        if (s[len] == '\t' || s[len] == ' ') {
            f++;
        } 
    } 
    char** fokk = (char**)malloc(f*sizeof(char*));
    int i = 0; // yet another iterator
    for (int j = 0; j < f; j++) {
        int m = 0;
        fokk[j] = (char*)malloc(len*sizeof(char));   
        while(s[i] != '\t' || s[i] != ' ') {
            if (s[i] == '\t' || s[i] == ' ')
                break;
            fokk[j][m] = s[i];
            i++;
            m++;
        }
        fokk[j][m] = '\0';
        i++;
    }
    *n = f;
    return fokk;
}

int main() {
    char* s = "This\twas a tremendously\tdifficuly assignment";
    int n;
    char** split_s = split(s, &n);
    for (int i = 0; i < n; i++) {
        printf("Strengur %d: %s\n", i, split_s[i]);
        free(split_s[i]);
    }
    free(split_s);
}
