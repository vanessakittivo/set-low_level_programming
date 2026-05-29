#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * keygen5 - generates a valid key for crackme5 given a username
 * Usage: ./keygen5 username
 */

static const char charset[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

static int f1(int n)
{
	return (n ^ 0x3b) & 0x3f;
}

static int f2(const char *s, int n)
{
	int sum = 0, i;

	for (i = 0; i < n; i++)
		sum += (int)s[i];
	return (sum ^ 0x4f) & 0x3f;
}

static int f3(const char *s, int n)
{
	int prod = 1, i;

	for (i = 0; i < n; i++)
		prod *= (int)s[i];
	return (prod ^ 0x55) & 0x3f;
}

static int f4(const char *s, int n)
{
	int max = (int)s[0], i;

	for (i = 0; i < n; i++)
		if ((int)s[i] > max)
			max = (int)s[i];
	srand(max ^ 0xe);
	return rand() & 0x3f;
}

static int f5(const char *s, int n)
{
	int sum = 0, i;

	for (i = 0; i < n; i++)
		sum += (int)s[i] * (int)s[i];
	return (sum ^ 0xef) & 0x3f;
}

static int f6(int first_char)
{
	int r = 0, i;

	for (i = 0; i < first_char; i++)
		r = rand();
	return (r ^ 0xe5) & 0x3f;
}

int main(int argc, char **argv)
{
	char key[7];
	const char *username;
	int n;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}
	username = argv[1];
	n = strlen(username);

	key[0] = charset[f1(n)];
	key[1] = charset[f2(username, n)];
	key[2] = charset[f3(username, n)];
	key[3] = charset[f4(username, n)];
	key[4] = charset[f5(username, n)];
	key[5] = charset[f6((int)username[0])];
	key[6] = '\0';

	printf("%s\n", key);
	return (0);
}
