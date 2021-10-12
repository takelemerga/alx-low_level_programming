#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements of a linked list
  * @h: The head of the linked list
  *
  * Return: The number of nodes of the linked list
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	const listint_t *start;

	start = h;
	if (start == NULL)
	{

		return (count);
	}
	else
	{
		while (start != NULL)
		{
			printf("%d\n", start->n);
			start = start->next;
			count++;
		}
	return (count);
	}
}
