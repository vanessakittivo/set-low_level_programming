#include "main.h"

/**
 * _strpbrk - finds first car that matches any in accept
 * @s: the train
 * @accept: the allowed letters
 * Return: pointer to the car or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
