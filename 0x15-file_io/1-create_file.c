#include "main.h"

/**
 * create_file - prints it to the POSIX std out
 *
 * @filename: file to be read
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 (success) or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int wc1 = 0;
	int wc2, fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[wc1])
			wc1++;

		wc2 = write(fp, text_content, wc1);
		if (wc2 != wc1)
			return (-1);
	}

	close(fp);
	return (1);
}
