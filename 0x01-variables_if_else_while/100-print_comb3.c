#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always  0 on (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i == j)
				continue;
			if (j < i)
				continue;
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

