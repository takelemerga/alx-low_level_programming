#include "main.h"
#include <stdlib.h>

/**
* array_range - create array of integers
* @min: minimum value
* @max: maximum value
* Return: pointer to the created array
*/
int *array_range(int min, int max)
{
	int *ptr;

	int diff, j;

	if (min > max)
	{
		return (NULL);
	}

	diff = (max - min) + 1;

	ptr = malloc(sizeof(int) * diff);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < diff; j++)
	{
		ptr[j] = min++;
	}
	return (ptr);
}
