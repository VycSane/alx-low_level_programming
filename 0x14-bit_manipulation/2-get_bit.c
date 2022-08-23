#include <stdlib.h>
#include <stdio.h>
/**
 * get_bit - gets the bit at an index
 * @n: the  number
 * @index: the index of the bit
 *
 * Return: the bit value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (n == 0)
		return (0);
	if (index < (8 * sizeof(unsigned int)))
	{
		bit = (n >> index) & 1;
		return (bit);
	}
	return (-1);
}
