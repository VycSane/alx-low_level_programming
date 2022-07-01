#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char count;

	for (count = '0'; count <= '9'; count++)
	{
		putchar(count);
	}
	putchar('\n');
	return (0);
}
