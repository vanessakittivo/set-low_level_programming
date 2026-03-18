#include "main.h"

/**
 * _puts_recursion - walks the mirror hall and prints each letter + newline
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
