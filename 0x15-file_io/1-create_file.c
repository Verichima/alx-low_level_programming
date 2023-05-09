#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: the name of the file to be created
 * @text_content: A NULL terminated string used to write to the file
 *
 * Return: -1 on failure or 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int of, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(of, text_content, length);

	if (of == -1 || w == -1)
		return (-1);

	close(of);

	return (1);
}

