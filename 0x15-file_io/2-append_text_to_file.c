#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
  * Do not create the file if it does not exist
  * If filename is NULL return -1
  * If text_content is NULL, do not add anything to the file.
  * return 1 if the file exists and -1 if the file does not exist
  * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, len;
	ssize_t wrl;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
		wrl = write(fp, text_content, len);
		if (wrl == -1 || wrl != len)
			close(fp);
			return (-1);
	}
	close(fp);
	return (1);
}
