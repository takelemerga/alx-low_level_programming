#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head of the list
 * Return: number of nodes in the list
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
	return (num_nodes);

	while (h != NULL)
	{
	printf("%d\n", h->n);
	num_nodes++;
	h = h->next;
	}
	return (num_nodes);
}
