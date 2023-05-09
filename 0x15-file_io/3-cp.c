#include "main.h"


#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)


/**
 * main - program(Entry point).
 *
 * @ac: argumt count
 * @av: argumt vector
 *
 * Return: (1 on success 0 on failure)
 */

int main(int ac, char **av)
{
	int from_fdd = 0, to_fdd = 0;
	ssize_t j;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fdd = open(av[1], O_RDONLY);
	if (from_fdd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fdd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fdd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((j = read(from_fdd, buf, READ_BUF_SIZE)) > 0)
		if (write(to_fdd, buf, j) != j)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (j == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_fdd = close(from_fdd);
	to_fdd = close(to_fdd);
	if (from_fdd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fdd), exit(100);
	if (to_fdd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fdd), exit(100);

	return (EXIT_SUCCESS);
}
