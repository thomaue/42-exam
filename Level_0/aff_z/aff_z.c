#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;

    if (argc != 2)
    {
        write(1, "z", 1);
        write(1, "\n", 1);
        return 0;
    }

    while ( argv[1][i] != '\0')
    {
        if ( argv[1][i] == 'z')
        {
            write(1, "z", 1);
            break;
        }
        i++;
    }
    write(1, "\n", 1);

    return 0;
}