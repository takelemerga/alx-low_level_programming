#include "lists.h"
#include <stdlib.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
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

	if (head == NULL && pos == 0)
		return (NULL);
	else 
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
			return (temp);
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
}
