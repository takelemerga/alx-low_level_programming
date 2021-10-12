#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: head of the list
* @index: place to insert node
* @n: value of the inserted node
* Return: pointer to head of list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int pos = index, i;

	listint_t *ptr, *temp;

	if (head)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = NULL;
		if (pos == 0)
		{
			temp->next = *head;
			*head = temp;
		}
		else
		{
			ptr = *head;
			for (i = 0; i < pos - 1; i++)
			{
				ptr = ptr->next;
				if (ptr == NULL)
					return (NULL);
			}
			temp->next = ptr->next;
			ptr->next = temp;
			return (temp);
		}
	}
	return (NULL);
}
