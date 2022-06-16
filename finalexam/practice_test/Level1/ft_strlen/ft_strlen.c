int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int main(void)
{
	char str[] = "waffle";
	ft_strlen(str);

	printf("%d", ft_strlen(str));
}
