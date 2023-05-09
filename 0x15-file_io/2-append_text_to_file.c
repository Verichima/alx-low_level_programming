#include "main.h"

/**
 * append_text_to_file - Function that ppends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: -1 on failure and 1 on successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, length);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
