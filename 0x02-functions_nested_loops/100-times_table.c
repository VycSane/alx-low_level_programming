#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
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
			if ((i == 0 && j == 0) || (j == 0))
			{
				_putchar('0');
			}
			else if (i * j > 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + i * j);
			}
			j == n ? _putchar('\n') : _putchar(',');
		}
	}
}
