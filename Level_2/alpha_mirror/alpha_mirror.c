#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    char ascii;

    i = 0;
    ascii = 0;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    else
    {
        while (argv[1][i] != '\0')
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'm' || argv[1][i] >= 'A' && argv[1][i] <= 'M')
            {
                if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
                {
                    ascii = 122 - (argv[1][i] - 97);
                }

                else
                {
                    ascii = 90 - (argv[1][i] - 65);
                }
            }

            else if (argv[1][i] >= 'n' && argv[1][i] <= 'z' || argv[1][i] >= 'N' && argv[1][i] <= 'Z')
            {
               if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
                {
                    ascii = 97 + (122 - argv[1][i]);
                }

                else
                {
                    ascii = 65 - (90 - argv[1][i]);
                } 
            }

            else
            {
                ascii = argv[1][i];
            }
            write(1, &ascii, 1);
            i++;
        }
        write(1, "\n", 1);
    }
    return 0;
}