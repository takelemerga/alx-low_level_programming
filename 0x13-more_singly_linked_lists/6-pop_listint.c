#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - pops off the head of the list and returns its contents
* @head: head of the list
* Return: contents of head
*/

int pop_listint(listint_t **head)
{
	listint_t *new_head;

	int data = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (data);
}
