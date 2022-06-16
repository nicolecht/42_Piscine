#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char *s1 = "abC";
	char *s2 = "abcde";
	unsigned int n = 3;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n)); //ready ft
}
