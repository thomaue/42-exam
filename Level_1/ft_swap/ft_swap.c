#include <unistd.h>

void	ft_swap(int *a, int *b)
{
    int *swap;
    char c;

    swap = b;
    b = a;
    a = swap;
}