#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if argument is uppercase
 * @c: The character to be tested
 *
 * Return: 0 if argument is uppercase and 1 if not a uppercase.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
