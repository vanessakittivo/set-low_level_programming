#include "main.h"

/**
 * _strncpy - copies exactly n cars from src to dest
 * @dest: destination train
 * @src: source train
 * @n: number of cars
 * Return: pointer to dest train
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
