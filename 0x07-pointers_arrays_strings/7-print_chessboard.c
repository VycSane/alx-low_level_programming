#include "main.h"
/**
 *  print_chessboard - prints the chessboard.
 *  @a: input
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i <= 7)
	{
		_putchar(a[i][j]);
		if (j == 7)
		{
			_putchar('\n');
			j = 0;
			i++;
		}
		j++;
	}
}
