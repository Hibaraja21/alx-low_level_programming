#include "main.h"


/**
 * _strlen - Entry point :Returns the len of a str
 *
 * @s: Str whose length to check.
 *
 * Return: integer length of str.
 */


int _strlen(char *s)
{
	int h = 0;

	if (!s)
		return (0);

	while (*s++)
		h++;
	return (h);
}


/**
 * create_file - creates a file (Entry point)
 *
 * @filename: Name of file to create.
 *
 * @text_content: text to write.
 *
 * Return:( 1 on success 0 on failure)
 */

int create_file(const char *filename, char *text_content)
{
	int ffd;
	ssize_t byte = 0, lenn = _strlen(text_content);

	if (!filename)
		return (-1);
	ffd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ffd == -1)
		return (-1);
	if (lenn)
		byte = write(ffd, text_content, lenn);
	close(ffd);
	return (byte == lenn ? 1 : -1);
}
