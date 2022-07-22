#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of commandline args
 * @argv: command line args
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0, num;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	while (i < argc)
	{
		num = atoi(argv[i]);
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
