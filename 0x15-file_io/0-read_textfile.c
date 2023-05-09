#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: The pointer being read
 * @letters: the number of value input to be read
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *abc;
	ssize_t of;
	ssize_t w;
	ssize_t t;

	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	abc = malloc(sizeof(char) * letters);
	t = read(of, abc, letters);
	w = write(STDOUT_FILENO, abc, t);

	free(abc);
	close(of);
	return (w);
}
