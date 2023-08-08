#include "main.h" 
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: text file.
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	int number_of_bytes_read;
	int number_of_bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}

	number_of_bytes_read = read(file_descriptor, buffer, letters);
	if (number_of_bytes_read == -1)
		return (0);

	number_of_bytes_written = write(STDOUT_FILENO, buffer, number_of_bytes_read);
	if (number_of_bytes_written == -1)
		return (0);

	close(file_descriptor);
	return (number_of_bytes_read);
}
