#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i = 0;
	unsigned int pf = 2u;
	long int n = 612852475143;

	while (1)
	{
		if (n == 1)
			break;
		if (n == i)
			i = 2;
		if ((n % pf) == 0)
			n /= pf;
		else
			pf++;
	}
	printf("%u\n", pf);
	return (0);
}
