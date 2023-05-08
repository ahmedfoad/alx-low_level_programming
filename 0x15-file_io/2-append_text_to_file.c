#include "main.h"

/**
 * _strlen - get lenght
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}

/**
 * append_text_to_file - appends a text of any file
 * at the end of the file.
 * @filename: name of the file that we will append
 * @text_content: NULL terminated
 * string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = write(fd, text_content, _strlen(text_content));
	}

	close(fd);
	if (len == -1)
	{
		return (-1);
	}
	return (1);
}

