#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new node, or NULL it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	if (head != NULL)
	{
		new_head = malloc(sizeof(listint_t));
		if (new_head == NULL)
			return (NULL);

		new_head->n = n;
		new_head->next = *head;
		*head = new_head;

		return (new_head);
	}

	return (NULL);
}
