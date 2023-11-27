#include "main.h"
/**
 * main - a program that copies the content of a file to another file.
 * Return: always 0. 
 */
char *read_from_a_file(int fd1)
{
	int nbr1;
	char *buffer;

	{
	}
	buffer = malloc(MAX_BUFFER);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
		exit(98);
	}
	nbr1 = read(fd1, buffer, MAX_BUFFER);
	if (nbr1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
		exit(98);
	}
	return (buffer);
}
void write_to_a_file(char *filename, char *buffer)
{
	int fd2, nbw2;

	fd2 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s", filename);
		exit(99);
	}
	nbw2 = write(fd2, buffer, MAX_BUFFER);
	if (nbw2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s", filename);
		exit(99);
	}
}
int main(int ac, char **av)
{
	int fd1, fd2, cs1, cs2;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(filename, O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	buffer = read_from_a_file(fd1);
	fd2 = write_to_a_file(av[2], buffer);
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
