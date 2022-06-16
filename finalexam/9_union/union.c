#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int scan(char *str, char s, int num)
{
	int i;
	i = 0;
	while (i < num)
	{
		if (str[i] == s)
			return(1);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 3)
	{
		ft_strcat(argv[1], argv[2]);
		//printf("%s", argv[1]);
		while (argv[1][i])
		{
		   if (scan(argv[1], argv[1][i], i) == 0)
			   write(1, &argv[1][i], 1);
		   i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

