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
	unsigned int count = 0;
	unsigned long int n_copy = *n;

	if (*n == 0 && index == 0)
		return (1);
	while (n_copy)
	{
		n_copy >>= 1;
		count++;
	}
	if (index < count)
	{
		*n |= 1 << index;
		return (1);
	}
	return (-1);
}
