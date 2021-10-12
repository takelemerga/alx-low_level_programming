#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: double pointer to head of list
 * @index: index of node to be deleted
 * Return: 1 if success, 1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos = index, i;

	listint_t *ptr, *temp;

	if (head)
	{
		if (pos == 0)
	{
			ptr = *head;
			*head = ptr->next;
			free(ptr);
			return (1);
		}
		else
		{
			ptr = *head;
			for (i = 0; i < pos - 1; i++)
			{
				temp = ptr;
				ptr = ptr->next;
				if (ptr == NULL || !(ptr->next))
					return (-1);
			}
			temp->next = ptr->next;
			free(ptr);
			return (1);
		}
	}
	return (-1);

}
