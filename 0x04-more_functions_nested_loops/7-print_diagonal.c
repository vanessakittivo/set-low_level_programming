#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int row = 0;

	if (n > 0)
	{
	while (row < n)
	{
		int space = 0;

		while (space < row)
	{
		_putchar(' ');
		space++;
	}
		_putchar('\\');
		_putchar('\n');
		row++;
	}
	}
	else
		_putchar('\n');
}
