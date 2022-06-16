#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	dest[50] = "ice";
	char	src[50] = "cream";
	unsigned int nb = 3;
	
	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
	strncat(dest, src, nb); // ready ft
	printf("%s", dest);
	return (0);
}
