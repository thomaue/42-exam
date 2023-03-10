// #include <stdio.h>
// #include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;

    i = 0;

    char *src2 = malloc(sizeof(char));

    if (src2 == NULL)
    {
        return NULL;
    }

    while (src[i] != '\0')
    {
        src2[i] = src[i];
        i++;
    }

    return src2;  /// pas de free car on doit retourner src2 
}

// int main(void)
// {
//     char src[] = "Galatée";

//     printf("\n\t%s\n\n", ft_strdup(src));

//     return 0;
// }