#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * not create the file if it does not exist
 *
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, not add anything to the file.
 * Return 1 if the file exists
 * and -1 if the file does not exist or if you do not have
 * the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nbw, len;

	if (!filename)
		return (-1);

		;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		nbw = write(fd, text_content, len);
		if (nbw == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
