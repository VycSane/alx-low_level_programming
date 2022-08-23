#include <stdlib.h>
/**
 * set_bit - sets a bit value at the index
 * @n: the  number
 * @index: the index of the bit
 *
 * Return: the bit value at the index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n == 0 && index == 0)
	{
		*n = 1;
		return (1);
	}
	if (index < (8 * sizeof(unsigned int)))
	{
		*n |= 1 << index;
		return (1);
	}
	return (-1);
}
