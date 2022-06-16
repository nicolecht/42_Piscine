#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				argv[1][i] += 1;
			if (argv[1][i] >= 'b' && argv[1][i] <= 'Y')
				argv[1][i] += 1;
			if 
