#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int i2;
    i=0;
    i2=0;

    if (argc != 3)
    {
        write(1, "\n", 2);
        return 0;
    }

    else
    {
        while (argv[1][i] != '\0')
        {
            while(argv[2][i2] != '\0')
            {
                if (argv[2][i2] == argv[1][i])
                {
                    write(1, &argv[1][i], 1);
                    break;
                }
                else
                {
                    i2+=1;    
                }
            }
            i2=0;
            i+=1;
        }
        write(1, "\n", 1);
    }
    
    return 0;
}