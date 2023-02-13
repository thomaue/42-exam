#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{

    int i;

    i = 0;
    if(argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    else
    {
        i = strlen(argv[1]);

        while(i >= 0)
        {
            write(1, &argv[1][i], 1);
            i--;
        }
        write(1, "\n", 1);
    }
return 0;
}