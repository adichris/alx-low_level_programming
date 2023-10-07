#include "main.h"

/**
 * binary_to_unit - a function to convert binary to unsigned integer
 * @b: binary argument of the number
 * Return: unsigned int
*/
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = 2 * num + (b[i] - '0');
	}

	return (num);
}
