#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	long long int sum = 0, num1 = 0, num2 = 1, total = 0;

	while (1)
	{
		sum = num1 + num2;
		if (sum >= 4000000)
			break;
		if (sum % 2 == 0)
			total += sum;
		num1 = num2;
		num2 = sum;
	}
	printf("%lld\n", total);
	return (0);
}
