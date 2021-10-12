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
	unsigned int pos = index, i, j;

	listint_t *ptr, *temp, *prev;

		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = NULL;
		if (head == NULL)
		{
			if (pos != 0)
				return (NULL);
			*head = temp;
			return (temp);
		}
		if (head != NULL && pos == 0)
		{
			temp->next = *head;
			*head = temp;
			return (temp);
		}
		ptr = *head;
		prev = NULL;
		i = 0;
		while (i < pos)
		{
			prev = ptr;
			ptr = ptr->next;
			if (ptr == NULL)
			{
				j = 0;
				break;
			}
			i++;
		}
		if (j == 0)
			return (NULL);
		temp->next = ptr;
		prev->next = temp;
		return (temp);
}
