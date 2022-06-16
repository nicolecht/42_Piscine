#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[] = "";
	char src[] = "waffle";
	unsigned int size = 4;
	unsigned int length;

	length = ft_strlcpy(dest, src, size);
	printf("%s %d", dest, length);
	return (0);
}
