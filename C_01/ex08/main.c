#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int size;
	int i;

	int tab[] = {4, 1, 5, 2, 6, 3, 7, 9, 8};
	size = 9;
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
