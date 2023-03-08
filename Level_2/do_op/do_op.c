#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int nb)
{
    unsigned int nbr;
    char num;

    if (nb < 0)
    {
        write(1 , "-" , 1);                                         ///NOT FINISHED///
        nbr = nb * -1;
    }

    else
    {
        nbr = nb;
    }

    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        num = (nbr % 10 + 48);
    }
}

int main(int argc, char **argv)
{
    int op1;
    int op2;
    char sum;

    op1 = atoi(argv[2]);
    op2 = atoi(argv[4]);
    sum = 0;

    if (argc != 4)
    {
        write(1, "\n", 1);
        return 0;
    }

    else
    {
        if(argv[2][0] == '+')
        {
            sum = op1 + op2 + 48;
        }
    }

    ft_putnbr(sum);
}
