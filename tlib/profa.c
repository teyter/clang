#include <stdio.h>
#include <string.h>
#include "tlib.h"

int main()
{
    char str1[20] = "cringe";
    char str2[20];

    my_strcpy(str2, str1);

    puts(str2);
}
