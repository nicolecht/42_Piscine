#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int num1 = 20;
	int num2 = 50;
	int *a = &num1;
	int *b = &num2;

	ft_swap(a, b);
	printf("%d %d", num1, num2);
	return(0);
}
