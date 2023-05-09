#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * file_cp - function that copy a file to a file.
 * @file_from: the name of the file to copy from.
 * @file_to: the name of the file to copy to.
 * Description: if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error where NAME_OF_THE_FILE is the first argument passed to your program
 * if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error where NAME_OF_THE_FILE is the second argument passed to your program
 * if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error where FD_VALUE is the value of the file descriptor
 * Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
 * You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer
 * You are allowed to use dprintf
 * 
 */
void file_cp(const char *file_from, char *file_to)
{
	int ff, ft, rclose;
	char buf[1024];
	ssize_t n, wrl;

	if (file_from == NULL)
		exit(98);

	ff = open(file_from, O_RDONLY);
	if (ff == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	n = read(ff, buf, 1024);
	if (n == -1)
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

	if (ft == -1)
	{
		dprintf(2, "Error: Can't write from file %s\n", file_to);
		exit(99);
	}

	wrl = write(ft, buf, n);
	if (wrl == -1 || wrl != n)
	{
		rclose = close(ft);
		if (rclose == -1)
		{
		dprintf(2, "Error: Can't close from file %i\n", ft);
		exit(100);
		}
	}
}
