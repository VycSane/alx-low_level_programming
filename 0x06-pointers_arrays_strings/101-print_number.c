#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer input
 */
void print_number(int n)
{
	static int i;
	static int sign;

	if (n == 0 && i == 0)
		_putchar('0');
	if (n > 0)
	{
		i++;
		print_number(n / 10);
		_putchar('0' + n % 10);
		i = 0;
	}
	if (n < 0)
	{
		i++;
		if (sign == 0)
		{
			_putchar('-');
			sign++;
		}
		print_number(n / 10);
		_putchar('0' + (n % 10) * -1);
		i = 0;
		sign = 0;
	}
}
