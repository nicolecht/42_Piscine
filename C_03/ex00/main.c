#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *s1 = "Abc";
	char *s2 = "abcde";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2)); //ready ft
}
