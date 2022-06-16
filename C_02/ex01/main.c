#include <stdio.h>
#include <string.h>
	
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[10] = "hello";
	char dest[10];
	unsigned int n = 3;

	ft_strncpy(dest, src, n);
	printf("%s", dest);
//	strncpy(dest, src, n);
//	printf("%s", dest);
	return (0);
}
