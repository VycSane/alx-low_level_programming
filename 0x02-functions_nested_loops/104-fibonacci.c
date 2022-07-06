#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	long double sum = 0, num1 = 0, num2 = 1;

	for (i = 0; i < 98; i++)
	{
		sum = num1 + num2;
		printf("%Lf", sum);
		if (i == 97)
		{
			printf("\n");
			break;
		}
		printf(", ");
		num1 = num2;
		num2 = sum;
	}
	return (0);
}
