// #include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int l1;
    int l2;

    l1=0;
    l2=0;

    while (s1[l1] != '\0')
    {
        l1+=1;
    }
    while (s2[l2] != '\0')
    {
        l2+=1;
    }

    if (l1 < l2)
    {
        return -1;
    }
    else if (l1 == l2)
    {
        return 0;
    }
    else
    {
       return 1; 
    }
}

// int main(void)
// {
//     char s1[] = "444";
//     char s2[] = "nuits";

//     printf("\n\t%d\n\n", ft_strcmp(s1, s2));

//     return 0;
// }