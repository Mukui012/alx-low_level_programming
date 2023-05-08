#include "main.h"

/**
 * read_textfile - read a certain size and prints to stdout
 * @filename: file to read from
 * @letters:  number of letters to be read and printed
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp; /* file decriptor*/
	ssize_t n_read, n_write;
	char *buff;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);


	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	n_read = read(fp, buff, letters);
	if (n_read == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}


	n_write = write(STDOUT_FILENO, buff, n_read);
	if (n_write == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}

	close(fp);
	return (n_read);

}
