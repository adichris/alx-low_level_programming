#include "main.h"
/**
 * git_bit - get the value of a given bit at an index
 * @n: long int number argument to be pass
 * @index: index of the value
 *
 * Return: 1 or 0 of the bit value of the number at index(success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
