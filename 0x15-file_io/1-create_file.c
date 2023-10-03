#include "main.h"
/**
 * create_file -  function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, count);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
