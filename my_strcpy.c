void my_strcpy(char *s, char *t)
{
    while ((*s++ = *t++))
        ;
}

int main() 
{
    char S[20] = "snickers";
    char T[20];
    my_strcpy(T, S);
}
