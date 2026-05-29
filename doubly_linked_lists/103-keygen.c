#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - keygen for crackme5
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char *username;
	int len, i;
	char key[20] = {0};

	if (argc != 2)
{
	printf("Usage: %s username\n", argv[0]);
	return (1);
}

	username = argv[1];
	len = strlen(username);

	for (i = 0; i < len; i++)
{
	key[i] = username[i] + (len - i);
}

	key[len] = 'A' + (len % 26);
	key[len + 1] = '\0';

	printf("%s\n", key);
	return (0);
}
