#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	long double sum = 0, num1 = 0, num2 = 1;

	for (i = 1; i <= 50; i++)
	{
		sum = num1 + num2;
		printf("%.0Lf", sum);
		if (i == 50)
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
