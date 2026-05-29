#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *charset =
	"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

/**
 * get_indices - compute key character indices for positions 0-2
 * @username: the username string
 * @n: length of username
 * @idx: output array of at least 3 ints
 */
static void get_indices(const char *username, int n, int *idx)
{
	int sum = 0, prod = 1, i;

	for (i = 0; i < n; i++)
	{
		sum += (int)username[i];
		prod *= (int)username[i];
	}
	idx[0] = (n ^ 0x3b) & 0x3f;
	idx[1] = (sum ^ 0x4f) & 0x3f;
	idx[2] = (prod ^ 0x55) & 0x3f;
}

/**
 * get_rand_indices - compute key indices for positions 3-5 using rand
 * @username: the username string
 * @n: length of username
 * @idx: output array of at least 3 ints
 */
static void get_rand_indices(const char *username, int n, int *idx)
{
	int max_c, sq_sum, i, r;

	max_c = (int)username[0];
	sq_sum = 0;
	for (i = 0; i < n; i++)
	{
		if ((int)username[i] > max_c)
			max_c = (int)username[i];
		sq_sum += (int)username[i] * (int)username[i];
	}
	srand(max_c ^ 0xe);
	idx[0] = rand() & 0x3f;
	idx[1] = (sq_sum ^ 0xef) & 0x3f;
	r = 0;
	for (i = 0; i < (int)username[0]; i++)
		r = rand();
	idx[2] = (r ^ 0xe5) & 0x3f;
}

/**
 * main - entry point, prints valid key for given username
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	char key[7];
	int a[3], b[3], n;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}
	n = strlen(argv[1]);
	get_indices(argv[1], n, a);
	get_rand_indices(argv[1], n, b);
	key[0] = charset[a[0]];
	key[1] = charset[a[1]];
	key[2] = charset[a[2]];
	key[3] = charset[b[0]];
	key[4] = charset[b[1]];
	key[5] = charset[b[2]];
	key[6] = '\0';
	printf("%s\n", key);
	return (0);
}
