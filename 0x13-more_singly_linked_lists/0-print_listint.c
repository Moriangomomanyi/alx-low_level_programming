#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of the list
 * @h: the head of a linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;

			count++;
		}
	}

	return (count);
}
