#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_bit - prints binary form of a decimal number
 * @n: the  number
 * @index: the index of the bit
 *
 * Return: the bit value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char temp[2042];
	unsigned int rem, i = 0;

	if (n == 0)
		printf("0");
	while (n > 0)
	{
		rem = n % 2;
		n /= 2;
		temp[i++] = '0' + rem;
	}
	temp[i] = '\0';
	if (index >= strlen(temp))
		return (-1);
	return (temp[index] - '0');
}
