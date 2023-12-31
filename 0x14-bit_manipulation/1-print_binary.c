#include "main.h"
/**
 * print_binary - print the binary representation of a number
 * @n: argument to be pass
 *
 * return 0 (success)
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar('0' + (n & 1));
}
