#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if argument is lowercase
 * @c: The character to be tested
 *
 * Return: 0 if argument is lowercase and 1 if not a lowercase.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
