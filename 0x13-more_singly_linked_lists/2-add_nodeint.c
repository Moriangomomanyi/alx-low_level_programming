#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: the head of the linked list
 * @n: the value to add to the new node
 *
 * return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);

		temp->n = n;
		temp->next = *head;
		*head = temp;

		return (temp);
	}

	return (NULL);
}



