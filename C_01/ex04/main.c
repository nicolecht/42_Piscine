#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int num1;
	int num2;
	int *a;
	int *b;

	num1 = 22;
	num2 = 5;
	a = &num1;
	b = &num2;
	ft_ultimate_div_mod(a, b);
	printf("%d %d", *a, *b);
	return (0);
}
