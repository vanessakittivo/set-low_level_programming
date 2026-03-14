#include "main.h"

/**
 * _strspn - counts how many cars at the start are in accept
 * @s: the train
 * @accept: the allowed letters
 * Return: number of matching cars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (i);
}
