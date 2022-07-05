#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Prints lowercase letters from a-z
 *
 * Return: 0 on Success.
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		_putchar(a);
	}
	_putchar('\n');
}
