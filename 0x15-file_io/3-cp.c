#include "main.h"

/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @str: string
 * @fd: file descriptor
 * Return: 0(success)
 **/

int __exit(int error, char *str, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copies one file to another
 * @argc: argument 1
 * @argv: file to be copied
 * Return: 0 (success), 97-100(exit value errors)
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2, f_read, f_write;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	/*sets file descriptor for copy-to file*/
	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		__exit(99, argv[2], 0);


	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		__exit(98, argv[1], 0);

	while ((f_read = read(fd_1, buffer, 1024)) != 0)
	{
		if (f_read == -1)
			__exit(98, argv[1], 0);

		f_write = write(fd_2, buffer, f_read);
		if (f_write == -1)
			__exit(99, argv[2], 0);
	}

	close(fd_2) == -1 ? (__exit(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (__exit(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
