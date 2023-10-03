#include <stdio.h>
#include "lists.h"

/**
 *  prints all the elements of a list_t list.
 *  @h: a linked list to print
 *
 *  Return the number of nodes
 */

size_t print_list(const list_t *h){
	size_t counter = 0;
	while (h != NULL){
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		++counter;
	}

	return (counter);
}
