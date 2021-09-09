#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array of integers
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int temp, i, max_index;

	max_index = n - 1;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[max_index - i];
	a[max_index - i] = temp;
	}
}
