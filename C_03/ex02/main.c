#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char	dest[50] = "ice";
	char	src[50] = "cream";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	strcat(dest, src); // ready ft
	printf("%s", dest);
	return (0);
}
