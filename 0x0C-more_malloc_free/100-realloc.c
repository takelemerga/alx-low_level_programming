#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: input pointer
 * @old_size: size of old ptr
 * @new_size: size of new ptr
 * Return: reallocated ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		return (NULL);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return (0);
	for (i = 0; i < old_size && i < new_size; i++)
		*(new_ptr + i) = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}
