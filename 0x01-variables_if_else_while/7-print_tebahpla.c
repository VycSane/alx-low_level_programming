#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; --lowercase)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
