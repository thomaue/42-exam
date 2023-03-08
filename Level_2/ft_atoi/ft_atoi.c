// #include <stdio.h>

int ft_atoi(char * str)
{
    int signe;
    int i;
    int num;

    signe = 0;
    i = 0;
    num = 0;

    if (str[0] == '\0')
    {
        return 0;
    }

    else
    {
        while(str[i] != '\0')
        {
            if (str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v' )
            {
                if (str[i] == '-')
                {
                    signe = signe + 1;
                }
                i++;
            }

            else if (str[i] >= '0' && str[i] <= '9')
            {
                while (str[i] >= '0' && str[i] <= '9')
                {
                    num = (num * 10) + str[i] - 48;
                    i++;
                }
                break;
            }

            else
            {
                return 0;
            }
        }
        
        if (signe % 2 ==0)
        {
            return (num);
        }
        
        else if (signe % 2==1)
        {
            return (num * -1);
        }
    }
}

// int main(void)
// {
//    char num[] = "42545145";

//     printf("\n\t%d\n\n", ft_atoi(num));

//     return 0;
// }