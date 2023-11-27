#include "main.h"
/**
 * read_from_a_file - Reads data from a file descriptor and returns
 * the read buffer.
 * @fd: File descriptor of the file to read from.
 * Return: a Pointer to the read buffer.
*/
char *read_from_a_file(int fd)
{
	static char buffer[MAX_BUFFER];
	ssize_t nbr;

	nbr = read(fd, buffer, MAX_BUFFER);
	if (nbr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %i", fd);
		exit(98);
	}
	return (buffer);
}
/**
 * write_to_a_file - Writes data from a buffer to a file descriptor.
 * @fd: File descriptor of the file to write to.
 * @buffer: Pointer to the buffer containing data to be written.
*/
void write_to_a_file(int fd, char *buffer)
{
	ssize_t nbw;

	nbw = write(fd, buffer, MAX_BUFFER);
	if (nbw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file descriptor %i", fd);
		exit(99);
	}
}
/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0.
*/
int main(int ac, char **av)
{
	int fd1, fd2, cs1, cs2;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	buffer = read_from_a_file(fd1);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s", av[2]);
		exit(99);
	}
	write_to_a_file(fd2, buffer);
	cs1 = close(fd1);
	if (cs1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i ", cs1);
		exit(100);
	}
	cs2 = close(fd2);
	if (cs2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", cs2);
		exit(100);
	}
	return (0);
}
