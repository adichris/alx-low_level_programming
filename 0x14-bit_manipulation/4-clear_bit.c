/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: value argument
 * @index: index of the bit
 *
 * Return: 1 (success) or -1(if error occurred)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
