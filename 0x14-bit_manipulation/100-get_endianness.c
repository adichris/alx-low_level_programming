/**
 * get_endianness - checks the endianness.
 *
 * Return: 1 (if big endian) 0 (if little endian)
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *bptr = (unsigned char *) &num;

	if (*bptr == 1)
		return (1);
	return (0);
}
