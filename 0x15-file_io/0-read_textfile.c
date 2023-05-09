#include "main.h"


/**
 * read_textfile - Entry point (read text from the file and print it).
 *
 * @filename: The name of the file to read.
 * @letters: the num of bytes to read
 *
 * Return: num bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdd;
	ssize_t byt;
	char buff[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fdd = open(filename, O_RDONLY);
	if (fdd == -1)
		return (0);
	byt = read(fdd, &buff[0], letters);
	byt = write(STDOUT_FILENO, &buff[0], byt);
	close(fdd);
	return (byt);
}
