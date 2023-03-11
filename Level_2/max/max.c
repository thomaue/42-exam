// #include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i;
    int biggie;

    i=0;
    biggie=0;

    if (len == 0)
    {
        return 0;
    }

    while(i < len)
    {
        if (tab[i] > biggie)
            biggie = tab[i];
        i+=1;
    }
    return biggie; 
}

// int main(void)
// {
//     unsigned int len = 10;
//     int tab[] = {0, 1 , 2, 3, 45, 5, 6, 7, 8, 9};

//     printf("\n\t%d\n\n", max(tab, len));

//     return 0;
// }