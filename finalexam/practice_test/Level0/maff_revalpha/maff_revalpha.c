#include <unistd.h>

int main(void)
{
	char odd_c = 'z';
	char even_c = 'Y';

	while (even_c >= 'A')
	{
		write(1, &odd_c, 1);
		write(1, &even_c, 1);
		odd_c -= 2;
		even_c -= 2;
	}
	write(1, "\n", 1);
}
