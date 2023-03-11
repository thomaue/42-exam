#include <unistd.h>

int main(int argc, char ** argv)
{
    int i;

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
            i+=1;
        }
        i-=1;

        while (argv[1][i] >= 32 && argv[1][i] <= 126 || argv[1][i] == '\t')
        {
            if (argv[1][i] >= 33 && argv[1][i] <= 126 && argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t')
            {
                i-=1;
                break;
            }
            i-=1;
        }
        i+=1;

        while (argv[1][i] >= 33 && argv[1][i] <= 126)
        {
            write(1, &argv[1][i], 1);
            i+=1;
        }
        write(1, "\n", 1);
    }
    return 0;
}