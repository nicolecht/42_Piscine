#include <unistd.h>

int repeat_alpha(char c)
{
	int dup;
	dup = 0;
	
	if (c >= 'a' && c <= 'z')
		dup = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		dup = c - 'A' + 1;
	else
		dup = 1;
	return(dup);
}

int main(int argc, char **argv)
{
	int dup;
	dup = 0;

	int i;
	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			dup = repeat_alpha(argv[1][i]);
			while (dup--)
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
