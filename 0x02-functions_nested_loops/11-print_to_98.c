#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
	{
		if (i != n)
	{
		_putchar(',');
		_putchar(' ');
	}
	if (i >= 0 && i <= 9)
	{
		_putchar('0' + i);
	}
	else if (i >= 10 && i <= 99)
	{
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
	}
	else if (i < 0 && i >= -9)
	{
		_putchar('-');
		_putchar('0' + (-i));
	}
	else if (i < 0 && i >= -99)
	{
		_putchar('-');
		_putchar('0' + ((-i) / 10));
		_putchar('0' + ((-i) % 10));
	}
}
	}
	else
	{
	for (i = n; i >= 98; i--)
	{
	if (i != n)
	{
		_putchar(',');
		_putchar(' ');
	}
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
	}
	}
		_putchar('\n');
}
