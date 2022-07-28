#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: number of commandline args
 * @argv: array containing commandline args
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	size_t i = 0, j = 0, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (argv[1][i] != '\0' || argv[2][j] != '\0')
	{
		if (!isdigit(argv[1][i]) && argv[1][i] != '\0')
		{
			printf("Error\n");
			exit(98);
		}
		if (!isdigit(argv[2][j]) && argv[2][j] != '\0')
		{
			printf("Error\n");
			exit(98);
		}
		if (argv[1][i] != '\0')
			i++;
		if (argv[2][j] != '\0')
			j++;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%lu\n", (num1 * num2));
	return (0);
}
