#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Convert binary to unsigned integer
 * Description: a programm to convert binary to unsigned integer
 * @b: binary argument
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c = 0;

	if (b == NULL)
		return (0);
	while (b[c] != '\0')
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		c++;
	}
	c--;
	while (c >= 0)
	{
		if (b[c] == '1')
			i += k;
		k *= 2;
		c--;
	}
	return (i);
}
