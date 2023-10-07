#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: Index of the bit to retrieve (0-based).
 *
 * Return: value of bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n >> index) & 1);
}
