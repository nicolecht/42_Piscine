#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "Hello";
	char dest[] = "";

	ft_strcpy(dest, src);
	printf("%s", dest);
//	strcpy(dest, src);
//	printf("%s", dest);
	return (0);
}
