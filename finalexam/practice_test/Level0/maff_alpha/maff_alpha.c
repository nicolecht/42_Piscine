#include <unistd.h>

int main(void)
{
	char odd_c = 'a';
	char even_c = 'B';

	while (even_c <= 'Z')
	{
		write(1, &odd_c, 1);
		write(1, &even_c, 1);
		odd_c += 2;
		even_c += 2;
	}
	write (1, "\n", 1);
}
