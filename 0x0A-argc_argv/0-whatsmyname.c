#include "main.h"
/**
 * main - Entry point
 * @argc: number of commandline args
 * @argv: command line args
 *
 * Return: 0 on Success
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;
	char *str = argv[0];

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
