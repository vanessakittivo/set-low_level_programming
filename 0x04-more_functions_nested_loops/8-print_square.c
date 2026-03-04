#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	int row = 0;

	if (size > 0)
	{
		while (row < size)
	{
		int col = 0;

		while (col < size)
	{
		_putchar('#');
		col++;
	}
		_putchar('\n');
		row++;
	}
	}
	else
		_putchar('\n');
}
