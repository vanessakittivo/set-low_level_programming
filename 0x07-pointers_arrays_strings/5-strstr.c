#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the needle train inside haystack
 * @haystack: big train
 * @needle: small train
 * Return: pointer to start of match or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
