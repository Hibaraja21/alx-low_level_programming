#include "main.h"


/**
 * _strlen - Entry point: ( Returns length of a str ).
 *
 * @s: String whose len to check.
 *
 * Return: inte leng of str.
 */

int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);

	while (*s++)
		a++;
	return (a);
}


/**
 * append_text_to_file - entry point (pends text to file)
 *
 * @filename: the name of file to create.
 *
 * @text_content: the text to write
 *
 * Return:( 1 on success 0 on failure)
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int ffd;
	ssize_t byte = 0, llen = _strlen(text_content);

	if (!filename)
		return (-1);
	ffd = open(filename, O_WRONLY | O_APPEND);
	if (ffd == -1)
		return (-1);
	if (llen)
		byte = write(ffd, text_content, llen);
	close(ffd);
	return (byte == llen ? 1 : -1);
}
