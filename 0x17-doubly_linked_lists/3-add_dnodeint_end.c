#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head pointer of the list
 * @n: value of new node
 * Return: address of new node or null if its fails
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;
	last_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	/* if linked list is empty then new node become head*/
	if (*head == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}
	while (last_node != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	new_node->prev = last_node;
	return (new_node);
}
