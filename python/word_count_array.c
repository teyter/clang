#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tstrlen(char* s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int tintlen(int* n)
{
    int i = 0;
    while (n[i] != '\0')
    {
        i++;
    }
    return i;
}

int *count_words(char *sentence)
{
	int lengd = tstrlen(sentence);
    int num_words = 1;
    int i;
    for (i = 0; i < lengd; i++)
    {
        if (sentence[i] == ' ')
        {
            num_words++;
        }
    }
    int *word_len = (int*) malloc(num_words*sizeof(int));

    int count = 1;
    int word = 0;
    for (i = 0; i < lengd; i++)
    {
        if (sentence[i] == ' ')
        {
            word_len[word] = count-1;
            count = 0;
            word++;
        }
        count++;
    }
    word_len[word] = count-1;
    return word_len;
}

int main() 
{
    char *str = "this is a sentence";
    int *how = count_words(str);
    for (int i = 0; i < tintlen(how); i++)
    {
        printf("%d ", how[i]);
    } printf("\n");

}
