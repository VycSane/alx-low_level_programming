#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 ten times per line.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++);
	{
		for (j = 0; j <= 14; j++)
		{
			if ('0' + (j / 10) != '0')
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			}
		}
		_putchar('\n');
	}
}
