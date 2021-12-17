#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *cur_node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			cur_node = ht->array[i];
			while (cur_node != NULL)
			{
				tmp = cur_node->next;
				free(cur_node->key);
				free(cur_node->value);
				free(cur_node);
				cur_node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
