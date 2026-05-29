#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *username;
	unsigned int sum = 0;
	unsigned int key;
	int i;

	if (argc != 2)
{
	printf("Usage: %s username\n", argv[0]);
	return (1);
}

	username = argv[1];

	for (i = 0; username[i] != '\0'; i++)
	sum += username[i];

	key = (sum ^ 0x4f) & 0x3f;

	printf("%d\n", key);

	return (0);
}
