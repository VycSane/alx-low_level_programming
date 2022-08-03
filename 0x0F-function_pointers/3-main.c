#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: no of commandline args
 * @argv: array of commandline args
 *
 * Return: 0 on Success.
 */
int main(int argc, char *argv[])
{
	char *s;
	int res, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	s = argv[2];
	num2 = atoi(argv[3]);
	if ((s[0] == '/' || s[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = (get_op_func(s))(num1, num2);
	if (!res && res != 0)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", res);
	return (0);
}
