#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char str[10] = "j ¶s~*2";

	printf("%d", ft_str_is_printable(str));
	return (0);
}
