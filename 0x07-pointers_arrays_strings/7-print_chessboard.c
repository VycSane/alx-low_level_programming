#include "main.h"
/**
 *  print_chessboard - prints the chessboard.
 *  @a: input
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 1;

	while (i <= 63)
	{
		_putchar(*(*a + i));
		if ((i + 1) == (7 * j + j))
		{
			j++;
			_putchar('\n');
		}
		i++;
	}
}
