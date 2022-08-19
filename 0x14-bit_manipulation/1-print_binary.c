#include "main.h"
#include <stdlib.h>
/**
 * print_binary - prints binary form of a decimal number
 * @n: the decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0, bit;
	unsigned long int n_copy = n;

	if (n == 0)
		_putchar('0');
	while (n_copy)
	{
		n_copy >>= 1;
		i++;
	}
	while (i > 0)
	{
		bit = (n >> (i - 1)) & 1;
		_putchar('0' + bit);
		i--;
	}
}
