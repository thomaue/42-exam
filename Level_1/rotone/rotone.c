#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    char ascii;

    i = 0;
    
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    else
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z' || argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                if (argv[1][i] == 'Z' || argv[1][i] == 'z')
                {
                    ascii = argv[1][i] - 25;
                    write(1, &ascii, 1);
                }
                
                else 
                {
                    ascii = argv[1][i] + 1;
                    write(1, &ascii, 1);
                }
            }

            else
            {
                write(1, &argv[1][i] , 1);
            }
            i++;
        }
        write(1, "\n", 1);
    }
    return 0;
}