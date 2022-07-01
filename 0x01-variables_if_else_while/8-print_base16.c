#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex_num;
	char hex_letter;

	for (hex_num = '0'; hex_num <= '9'; ++hex_num)
	{
		putchar(hex_num);
	}
	for (hex_letter = 'a'; hex_letter <= 'e'; ++hex_letter)
	{
		putchar(hex_letter);
	}
	putchar('\n');
	return (0);
}
