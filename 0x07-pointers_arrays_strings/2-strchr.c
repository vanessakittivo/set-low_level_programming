#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds the first car with letter c
 * @s: the train
 * @c: the letter to find
 * Return: pointer to the car or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')      /* Walk until the red stop light */
	{
		if (*s == c)        /* Found the letter! */
			return (s);
		s++;                /* Move to next car */
	}

	if (*s == c)            /* Check the stop light itself (rare case) */
		return (s);

	return (NULL);          /* Never found it */
}
