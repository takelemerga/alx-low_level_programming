#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t k, m, n;

	if (array == NULL)
		return (-1);

	for (m = 0, n = size - 1; n >= m;)
	{
		k = m + (((double)(n - m) / (array[n] - array[m])) * (value - array[m]));
		if (k < size)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", k);
			break;
		}

		if (array[k] == value)
			return (k);
		if (array[k] > value)
			n = k - 1;
		else
			m = k + 1;
	}

	return (-1);
}
