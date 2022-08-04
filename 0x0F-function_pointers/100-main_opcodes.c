#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - Entry point
 * @argc: number of commandline args
 * @argv: array of commandline args
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	};
	system("gcc 100-main_opcodes.c");
	system("objdump -d a.out | awk -F\"\n\" -v RS=\"\n\n\" '$1 ~ /main/' | cut -f 2 |");
	return (0);
}
