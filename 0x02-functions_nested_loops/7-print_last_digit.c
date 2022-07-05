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
	int last_digit = n % 10;

	return (last_digit);
}
