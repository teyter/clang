#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *count_words(char *sentence);
void split(char *sentence);
int len(char* s);
int tintlen(int* n);
int tstrlen(char* s);
void print_array(int* a);

// char **split(char *sentence)
void split(char *sentence)
{
	int *words = count_words(sentence);
    // print_array(words);
    int wordlen = tintlen(words);
    char **ret = (char**) malloc (wordlen*sizeof(char*));
    for (int i = 0; i < wordlen; i++)
    {
        ret[i] = (char*) malloc(words[i]*sizeof(char));
        for (int j = 0; i < words[i]; j++)
        {
            // ret[i][j] = 
        }
    }
}

void print_array(int* a)
{
    int lengd = tintlen(a);
    for (int i = 0; i < lengd; i++)
    {
        printf("%d ", a[i]);
    } printf("\n");
}

int tstrlen(char* s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int len(char* s)
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
    split(str);
}
