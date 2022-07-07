#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of diagonals to print
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
}
