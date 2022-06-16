#include <unistd.h>

void	ft_putchar(char c);

void	judge(int a, int b, int x, int y)
{
	if ((a == 1 && b == 1) || (a == x && b == y))
		ft_putchar('A');
	else if ((a == x && b == 1) || (a == 1 && b == y))
		ft_putchar('C');
	else if (a == x || a == 1)
		ft_putchar('B');
	else if (b == y || b == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = x;
	b = y;
	if (x <= 0 || y <= 0)
	{
		write(1, "Please enter a number bigger than 0", 35);
	}
	else
	{
		while (b > 0)
		{
			while (a > 0)
			{
				judge(a, b, x, y);
				a--;
			}
			ft_putchar('\n');
			a = x;
			b--;
		}
	}
}
