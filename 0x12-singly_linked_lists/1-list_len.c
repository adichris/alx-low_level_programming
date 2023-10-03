#include "lists.h"

/**
 * list_lem - count number of element in the list
 * @h: a single linked list
 *
 * Return: the number of nodes in the list
 */


size_t list_len(const list_t *h)
{
	size_t counter = 0;

	whilr (h != NULL)
	{
		counter ++;
		h = h->next;
	}

	return (counter);
}
