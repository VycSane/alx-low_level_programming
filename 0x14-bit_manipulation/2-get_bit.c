#include <stdlib.h>
/**
 * get_bit - prints binary form of a decimal number
 * @n: the  number
 * @index: the index of the bit
 *
 * Return: the bit value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int count = 0;
	unsigned long int n_copy = n;
	
	while (n_copy)
	{
		n_copy >>= 1;
		count++;
	}
	if (index < count)
	{
		bit = (n >> index ) & 1;
		return (bit);
	}
	return (-1);
}
