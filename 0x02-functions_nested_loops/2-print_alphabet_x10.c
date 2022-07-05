#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Prints lowercase letters from a-z
 *
 * Return: 0 on Success.
 */
void print_alphabet_x10(void)
{
	char a;
	int count = 0;

	while (count < 10)
	{
		for (a = 'a'; a <= 'z'; ++a)
		{
			_putchar(a);
		}
		_putchar('\n');
		count++;
	}
}
