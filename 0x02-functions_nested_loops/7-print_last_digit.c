#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: The number
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	char last_digit;

	if (n == INT_MIN)
	{
		_putchar('0' + 8);
		return (8);
	}
	else if (n >= 0)
	{
		last_digit = n % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = (-n) % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
