#include "main.h"

/**
 * _strcat - appends the src train to the dest train
 * @dest: destination train
 * @src: source train
 * Return: pointer to dest train
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
