#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int file_descriptor);

/**
 * create_buffer - allocating 1024 bytes for a buffer
 * @file: name of file buffer is storing chars for
 *
 * Return: pointer to the newly-allocated buffer
*/
char *create_buffer(char *file)
{
	char *file_buffer;

	file_buffer = malloc(sizeof(char) * 1024);

	if (file_buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (file_buffer);
}
/**
 * close_file - closing file descriptors
 * @file_descriptor: file descriptor to be closed
*/
void close_file(int file_descriptor)
{
	int close_status;

	close_status = close(file_descriptor);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}
/**
 * main - copying contents of file to another file
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int source_file_descriptor, destination_file_descriptor
	int bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	source_file_descriptor = open(argv[1], O_RDONLY);
	bytes_read = read(source_file_descriptor,
			buffer, 1024);
	destination_file_descriptor = open(argv[2], O_CREAT |
			O_WRONLY | O_TRUNC, 0664);

	do {
	if (source_file_descriptor == -1 || bytes_read == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}

	bytes_written = write(destination_file_descriptor, buffer, bytes_read);
	if (destination_file_descriptor == -1 || bytes_written == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}
	bytes_read = read(source_file_descriptor, buffer, 1024);
	destination_file_descriptor = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);

	free(buffer);
	close_file(source_file_descriptor);
	close_file(destination_file_descriptor);

	return (0);
}

