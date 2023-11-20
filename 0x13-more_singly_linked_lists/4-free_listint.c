#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees the allocated memory
 * @head: the head of the linked list
 *
 * return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
