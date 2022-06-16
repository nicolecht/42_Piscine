int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	nbr *= sign;
	return (nbr);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int val;
	char str[] = " -1234a567";
	char str2[] = " -1234a567";

	val = atoi(str);
	printf("string value = %s, int value = %d\n", str, val);

	val = atoi(str);
	printf("string value = %s, int value = %d\n", str, val);

	return (0);
}
