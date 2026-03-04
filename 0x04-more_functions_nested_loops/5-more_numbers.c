#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int row = 0;

	while (row < 10)
	{
		int num = 0;

		while (num <= 14)
		{
			if (num > 9)
			_putchar('0' + (num / 10));
			_putchar('0' + (num % 10));
			num++;
		}
			_putchar('\n');
			row++;
		}
}
