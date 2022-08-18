#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * binary_to_uint - converts binary to decimal
 * @b: the binary number
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len, val = 0, res = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	while (i < len)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
		{
			val = power(2, (len - (i + 1)));
			res += val;
		}
		i++;
	}
	return (res);
}
/**
 * power - finds the power of x to y
 * @x: the base
 * @y: the index
 *
 * Return: the power of x to y
 */
unsigned int power(unsigned int x, unsigned int y)
{
	unsigned int i = 0, res = 1;

	while (i < y)
	{
		res *= x;
		i++;
	}
	return (res);
}
