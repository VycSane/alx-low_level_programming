#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on Success.
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}

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
