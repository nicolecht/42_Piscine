#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int *nbr;
	int	integer;

	integer = 50;
	nbr = &integer;

	ft_ft(nbr);

	printf("%d", integer);
	return(0);
}
