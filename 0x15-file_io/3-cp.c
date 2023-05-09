#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Function to create 1024 bytes for a buffer.
 * @file: Variable used by buffer to store chars
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Used to close the descriptors of file.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Used to copy the contents of a file to another.
 * @argc: Used to describe the number of arguments supplied to the program.
 * @argv: Represents an array of pointers to the arguments.
 *
 * Return: 0 when successful.
 *
 * Description: Argument count is incorrect - exit code 97.
 * If file_from Don't exist or cannot be read - exit code 98.
 * If file_to Cam't be created or written to - exit code 99.
 * If file_to / file_from can't be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int the_file_from, the_file_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	the_file_from = open(argv[1], O_RDONLY);
	r = read(the_file_from, buffer, 1024);
	the_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (the_file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(the_file_to, buffer, r);
		if (the_file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(the_file_from, buffer, 1024);
		the_file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(the_file_from);
	close_file(the_file_to);

	return (0);
}

