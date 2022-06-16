#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char	dest[50] = "Hello";
	char	src[50] = "World";
	unsigned int size = 4;
	unsigned int length;

	length = ft_strlcat(dest, src, size);
	printf("%s %d\n", dest, length);

//	length = strlcat(dest, src, size); //ready ft
//	printf("%s %d", dest, length);
	return (0);
}
