#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char *str = "IceCream";
	char *to_find = "ea";
	char *p;

//	p = ft_strstr(str, to_find);
//	printf("%s\n", p);
	p = strstr(str, to_find);
	printf("%s", p);
	return (0);
}
