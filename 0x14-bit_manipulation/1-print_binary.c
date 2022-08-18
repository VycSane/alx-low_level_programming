#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints binary form of a decimal number
 * @n: the decimal number
 */
void print_binary(unsigned long int n)
{
	char temp[100];
	unsigned int rem, i = 0, j = 0;

	if (n == 0)
		printf("0");
	while (n > 0)
	{
		rem = n % 2;
		n /= 2;
		temp[i++] = '0' + rem;
		j++;
	}
	temp[i] = '\0';
	while (j > 0)
	{
		printf("%c", temp[j - 1
]);
		j--;
	}
}
