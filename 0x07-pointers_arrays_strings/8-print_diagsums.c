#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array to be printed
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int i, j, diagonal1, diagonal2;

	diagonal1 = 0;
	diagonal2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diagonal1 += *((a + i * size) + j);
			}
			if ((i + j) == (size - 1))
			{
				diagonal2 += *((a + i * size) + j);
			}
		}
	}
	printf("%i, %i\n", diagonal1, diagonal2);
}
