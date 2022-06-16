#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = ft_strlen(str) - 1;

	while (end > start)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}

int main(void)
{
	char str[] = "walabe";
	ft_strrev(str);
	printf("%s", str);
}
