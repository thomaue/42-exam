#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;

    if(argc != 2)
    {
        write(1, "\n" , 1);
    }

    else
    {
        while(argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                j = 96;
                while(j != argv[1][i])
                {
                    write(1, &argv[1][i], 1);
                    j++;
                }

            }

            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                j = 64;
                while(j != argv[1][i])
                {
                    write(1, &argv[1][i], 1);
                    j++;
                }

            }

            else
            {
                write(1, "alph", 4);
            }
            i++;
        }
        write(1, "\n", 1);
    }
}