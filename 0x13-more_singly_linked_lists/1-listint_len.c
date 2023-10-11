#include "lists.h"
/**
 * size_t listint_len - number of elements in a linked listint_t list
 * @h: list toprint
 *
 * Return:  the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t items = 0;

	while (h != NULL)
	{
		++items;
		h = h->next;
	}
	return (items);
}
