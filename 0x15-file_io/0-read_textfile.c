#include "holberton.h"

/**
 * read_textfile - Function to read file.
 * @filename: char *
 * @letters: size of char *
 * Return: Returns letters read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, escritura, r;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	r = read(fd, buff, letters);

	escritura = write(STDOUT_FILENO, buff, r);

	if (escritura == -1)
		return (0);

	close(fd);

	return (escritura);
}
