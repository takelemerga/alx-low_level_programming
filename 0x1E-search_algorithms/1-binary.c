#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */
void print_array(int *array, size_t size)
{
	size_t k;

	printf("Searching in array:");
	for (k = 0; k < size; k++)
	{
		printf(" %d", array[k]);
		if (k != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, m, r;

	if (array != NULL && size > 0)
	{
		l = 0;
		r = size - 1;
		print_array(array + l, r + 1 - l);
		while (l < r)
		{
			m = (l + r) / 2;
			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				r = m;
			else
				return (m);
			print_array(array + l, r + 1 - l);
		}
	}
	return (-1);
}
