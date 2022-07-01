#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always  0 on (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; ++k)
			{
				if (i == j || j == k || i == k)
					continue;
				if (j < i || k < j)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

