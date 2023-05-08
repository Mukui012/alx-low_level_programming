#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file to be created
 * @text_content: text to be written to file
 * Return: 1 success -1 error
 */

int create_file(const char *filename, char *text_content)
{
	int i, fp, f_write;
	ssize_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	len = 0;
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
			len++;
		}
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f_write = write(fp, text_content, len);

	if (fp == -1 || f_write == -1 || f_write != len)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
