#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row = 1;

	if (size > 0)
	{
		while (row <= size)
		{
			int space = 1;
			int hash = 1;

			while (space <= size - row)
			{
				_putchar(' ');
				space++;
			}
			while (hash <= row)
			{
				_putchar('#');
				hash++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
		_putchar('\n');
}
