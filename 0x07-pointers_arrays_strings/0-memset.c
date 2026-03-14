#include "main.h"

/**
 * _memset - paints the first n houses with colour b
 * @s: starting house on the street
 * @b: the colour to paint
 * @n: how many houses to paint
 * Return: pointer to the first house
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	/* Walk exactly n houses and paint each one */
	while (i < n)
	{
		s[i] = b;   /* Paint this house with colour b */
		i++;        /* Move to the next house */
	}

	return (s);     /* Give back the starting house */
}
