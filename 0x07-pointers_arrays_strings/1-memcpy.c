#include "main.h"

/**
 * _memcpy - copies n houses from src to dest
 * @dest: destination street
 * @src: source street
 * @n: how many houses to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];   /* Copy the family from src to dest */
		i++;
	}

	return (dest);
}
