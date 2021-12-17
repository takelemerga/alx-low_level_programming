#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: input ht
 */
void hash_table_print(const hash_table_t *ht)
{
	register unsigned int i = 0;
	hash_node_t *curr_node = NULL;
	int comma = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr_node = ht->array[i];
			while (curr_node)
			{
				if (comma == 1)
					printf(", ");
				printf("'%s': '%s'", curr_node->key, curr_node->value);
				comma = 1;
				curr_node = curr_node->next;
			}
		}
	}
	printf("}\n");
}
