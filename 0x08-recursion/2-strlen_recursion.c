#include "main.h"

/**
 * _strlen_recursion - counts doors in the mirror hall
 * @s: pointer to the string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
