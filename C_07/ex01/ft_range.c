#include <stdlib.h>

int        *ft_range(int min, int max)
{
    int        *tab;
    int        i;
    if (min >= max)
        return (0);
    if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
        return (0);
    i = 0;
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    return (tab);
}

/*
int        main(void)
{
    int        i;
    int        *tab;
    int min = 52;
    int max = 59;

    tab = ft_range(min, max);
    i = 0;
    while (i < (max - min))
    {
        printf("%d\n", tab[i]);
        i++;
    }
}
*/
