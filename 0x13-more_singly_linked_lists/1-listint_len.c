#include <stdio.h>
#include "lists.h"
/**
 * listint_len - counts the number of elements in a linked list
 * @h: the head of the linked list
 *
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
	        while (h)
		{
		        h = h->next;
		        count++;
		}
	}

	return (count);
}
