// #include <stdio.h>
// #include <stdlib.h>

char    *ft_strrev(char *str)
{
    int i;
    int i2;
    i = 0;
    i2 = 0;

    while (str[i])
        i++;
    char * str2 = malloc(sizeof(char) * (i + 1));
    i-=1;

    while (i >= 0)
    {
        str2[i2] = str[i];
        i-=1;
        i2+=1;
    }
    str2[i2] = '\0';

    return str2;
}

// int main(void)
// {
//     char str[] = "kayak";
//     printf("\n\t%s\n\n", ft_strrev(str));
//     return 0;
// }