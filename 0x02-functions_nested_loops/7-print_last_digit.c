#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: The number
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
	{
		last_digit = n % 10;
		_putchar(last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = (-n) % 10;
		_putchar(last_digit);
		return (last_digit);
	}
}
