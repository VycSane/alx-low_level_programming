#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the argument n
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if ((i * j) <= 9)
			{
				_putchar('0' + (i * j));
			}
			else
			{
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			}
			if (j == n)
			{
				_putchar('\n');
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if (i * j <= 9)
				_putchar(' ');
		}
	}
}
