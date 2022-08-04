#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
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
	char str[200];

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("Error\n");
		exit(2);
	};
	strcpy(str, "objdump -d a.out | awk -F\"\n\"");
	strcat(str, " -v RS=\"\n\n\" '$1 ~ /main/' | cut -f 2 |");
	strcat(str, " sed '1d'");
	strcat(str, " | tr -d '\n\r ' | ");
	strcat(str, "cut -c -$((2 * ");
	strcat(str, argv[1]);
	strcat(str, ")) | ");
	strcat(str, "fold -w2 | paste -sd' '");
	system("gcc 100-main_opcodes.c");
	system(str);
	return (0);
}
