#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer
 *
 * Return: The absolute value of the argument
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
