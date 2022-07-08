#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the number to be printed
 */
void print_number(int n)
{
	size_t j;

	size_t start = 10;
	int checker = -1;
	int negative = 0;
	int int_min = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			negative = 1;
			if (n == INT_MIN)
			{
				n = INT_MAX;
				int_min = 1;
			}
			else
			{
				n = -n;
			}
		}
		while (1)
		{
			checker = n / start;
			if (checker == 0)
				break;
			start *= 10;
		}
		if (negative)
			_putchar('-');
		for (j = start; j > 1; j /= 10)
		{
			if (int_min == 1 && j <= 10)
			{
				_putchar('1' + ((unsigned int) (n * ((double) 10 / j)) % 10));
			}
			else
			{
				_putchar('0' + ((unsigned int) (n * ((double) 10 / j)) % 10));
			}
		}
	}
}
