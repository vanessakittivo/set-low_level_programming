#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

/* Get lengths */
	while (s1[len1])
	len1++;
	while (s2[len2])
	len2++;

/* Allocate memory for both strings + null terminator */
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
	return (NULL);

/* Copy s1 */
	for (i = 0; i < len1; i++)
	result[i] = s1[i];

/* Copy s2 */
	for (j = 0; j < len2; j++)
	result[i + j] = s2[j];

	result[i + j] = '\0';
	return (result);
}
