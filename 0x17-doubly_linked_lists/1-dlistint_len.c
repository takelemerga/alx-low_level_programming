#include "lists.h"

/**
 * dlistint_len - counts and returns number of elements of a dlistint_t list.
 * @h: pointer to head of the list
 * Return: number of elements in the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements;

	num_elements = 0;
	if (h == NULL)
	return (num_elements);

	while (h)
	{
	num_elements++;
	h = h->next;
	}
	return (num_elements);
}
