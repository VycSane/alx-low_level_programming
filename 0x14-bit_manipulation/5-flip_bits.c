#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - counts number of bits to flip to get to another number
 * @n: the number to be flipped
 * @m: the number to get after flipping
 *
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m, flip_count = 0;

	while (num != 0)
	{
		num &= (num - 1);
		flip_count++;
	}
	return (flip_count);
}
