#include "lists.h"
/**
 * size_t print_listint -  prints all the elements of a listint_t list.
 * @h: list argument
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t items = 0;

	while (h)
	{
		++items;
		h = h->next;
	}
	return (items);
}
