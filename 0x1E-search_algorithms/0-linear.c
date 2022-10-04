#include "search_algos.h"

/**
 *linear_search - linear search for a value
 *@array: pointer to array
 *@size: size of array
 *@value: value to be searched
 *Return: a value
 */

int linear_search(int *array, size_t size, int value)
{
	int k = 0;

	while (size > 0)
	{
		if (array[k] != value)
		{
			printf("Value checked array[%d] = [%d]\n", k, array[k]);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", k, value);
			return (k);
		}
		k++;
		size--;
	}
	return (-1);
}
