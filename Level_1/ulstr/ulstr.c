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
        while(argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                ascii = argv[1][i] - 32;
            }

            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                ascii = argv[1][i] + 32;
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