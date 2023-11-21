#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: the head of a linked list
 * @n: the value to be added to the new node
 *
 * Return: returns the address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_list;

	if (head)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}

	return (NULL);
}
