#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: Size of the array
  *
  * Return: A pointer to the newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = NULL;
	hash_node_t **arr_ptr = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* array of pointers */
	arr_ptr = malloc(sizeof(hash_node_t *) * size);
	if (arr_ptr == NULL)
		return (NULL);

	for (; i < size; ++i)
		arr_ptr[i] = NULL;

	table->size = size;
	table->array = arr_ptr;

	return (table);
}
