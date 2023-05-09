#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * close_file - function that handle close errors.
 * @fd: file descriptor.
 */
void close_file(int fd)
{
	int result = close(fd);

	if (result == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
/**
 * file_cp - function that copy a file to a file.
 * @file_from: the name of the file to copy from.
 * @file_to: the name of the file to copy to.
 */
void file_cp(const char *file_from, char *file_to)
{
	int ff, ft;
	char buf[1024];
	ssize_t n, wrl;

	ff = open(file_from, O_RDONLY);
	if (ff == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ft = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((n = read(ff, buf, 1024)) > 0)
	{
		wrl = write(ft, buf, n);
		if (wrl == -1 || wrl != n)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close_file(ff);
	close_file(ft);
}
/**
 * main - program that copies the content of a file to another file.
 * @ac: number of argument.
 * @av: arguments.
 * Return: 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	file_cp(av[1], av[2]);
	return (0);
}
