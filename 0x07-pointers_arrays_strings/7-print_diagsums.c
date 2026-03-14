#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums both diagonals of a square grid
 * @a: pointer to the grid (flattened)
 * @size: size of the square
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];           /* Main diagonal */
		sum2 += a[i * size + (size - 1 - i)]; /* Other diagonal */
	}
	printf("%d, %d\n", sum1, sum2);
}
