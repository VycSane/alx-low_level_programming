#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	char i, j;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = '0'; j <= '9'; ++j)
		{
			_putchar(i * j);
			if (j == '9')
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
