/**
 * print_chessboard - should print the chessboard
 * @a: array to be printed
 * Return: void
*/
#include "holberton.h"
void print_chessboard(char (*a)[8])
{
	int i;
	int b;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][b]);
		}
		_putchar('\n');
	}

}
