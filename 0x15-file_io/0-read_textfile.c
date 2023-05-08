#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * filename: text file.
 * letters: letters is the number of letters it should read and print.
 * Return: the actual number of letters it could read and print 
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = open(filename, O_RDONLY);
	char buf[1024]; 
	ssize_t n = read(fp, buf, letters);
	ssize_t wrl = write(STDOUT_FILENO, buf, n);

	close(fp);
	return (wrl);
}
