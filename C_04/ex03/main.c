#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(void)
{
	int val;
	char str[] = " ---+--+1234567";
	char str2[] = " ---+--+1234567";

	val = atoi(str);
	printf("string value = %s, int value = %d\n", str, val);

	val = ft_atoi(str2);
	printf("string value = %s, int value = %d\n", str2, val);
	
	return (0);
}






