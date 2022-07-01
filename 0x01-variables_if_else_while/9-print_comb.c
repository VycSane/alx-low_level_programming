#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always  0 on (Success)
 */
int main(void)
{
	int count;

	for (count = '0'; count <= '9'; ++count)
	{
		putchar(count);
		if (count == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
