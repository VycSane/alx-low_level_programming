#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if argument is a digit.
 * @c: The character to be tested
 *
 * Return: 1 if argument is a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
