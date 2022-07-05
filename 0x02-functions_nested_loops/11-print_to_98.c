#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting natural number
 */
void print_to_98(int n)
{
	if ( n <= 98)
	{
		while (1)
		{
			printf("%d",n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n++;
		}
	}
	else
	{
		while (1)
		{
			printf("%d",n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n--;
		}
	}
}
