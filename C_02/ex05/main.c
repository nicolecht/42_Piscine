#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char str[10] = "DaKF";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
