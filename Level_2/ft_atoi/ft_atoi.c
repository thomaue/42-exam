// #include <stdio.h>

int	ft_atoi(const char *str)
{
    int i;
    int num;

    i = 0;
    num = 0;

    while (str[i] != '\0')
    {
        while (str[i] <= '9' && str[i] >= '0')
        {
            num = (num * 10) + str[i] - 48;
            i+=1;
        }
    }
    return num;
}

// int main(void)
// {
//     char num[] = "42545145";

//     printf("\n\t%d\n\n", ft_atoi(num));

//     return 0;
// }