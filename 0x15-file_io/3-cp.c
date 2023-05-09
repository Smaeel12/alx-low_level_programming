#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * file_cp - function that copy a file to a file.
 * @file_from: the name of the file to copy from.
 * @file_to: the name of the file to copy to.
 */
void file_cp(const char *file_from, char *file_to)
{
	int ff, ft, rclose;
	char buf[1024];
	ssize_t n, wrl;

	ff = open(file_from, O_RDONLY);
	n = read(ff, buf, 1024);
	if (n == -1 || file_from == NULL || ff == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		rclose = close(ff);
		if (rclose == -1)
		{
			dprintf(2, "Error: Can't close from file %i\n", ff);
			exit(100);
		}
	}
	ft = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	wrl = write(ft, buf, n);
	if (ft == -1 || wrl == -1 || wrl != n)
	{
		rclose = close(ft);
		if (rclose == -1)
		{
		dprintf(2, "Error: Can't close from file %i\n", ft);
		exit(100);
		}
	}
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
