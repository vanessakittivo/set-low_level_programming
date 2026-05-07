#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len = 0;

	if (str == NULL)
	return (NULL);

/* Calculate length of string */
	while (str[len])
	len++;

/* Allocate memory for copy (+1 for null terminator) */
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	return (NULL);

/* Copy characters */
	for (i = 0; i < len; i++)
	copy[i] = str[i];

	copy[len] = '\0';  /* Null terminate */

	return (copy);
}
