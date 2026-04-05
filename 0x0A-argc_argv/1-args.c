#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
