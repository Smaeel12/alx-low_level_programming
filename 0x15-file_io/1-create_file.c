#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: string.
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i, l = 0;

	for (i = 0 ; *(s + i) != '\0'; i++)
		l++;
	return (l);
}

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created, file can
  * not be written, write “fails”, etc…)
  * The created file must have those permissions: rw-------.
  * If the file already exists, do not change the permissions.
  * if the file already exists, truncate it
  * if filename is NULL return -1
  * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wrl;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		wrl = write(fp, text_content, len);
		if (wrl == -1 || wrl != len)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);

}
