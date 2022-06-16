#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_length;
	int		i;

	src_length = 0;
	while (src[src_length])
		src_length++;
	if (!(dest = (char *)malloc(sizeof(char) * src_length + 1)))
		return (NULL);
	i = 0;
	while (i < src_length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strdup("Waffle Wifi"));
	return (0);
}
